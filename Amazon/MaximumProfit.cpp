#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter the number of stocks: "<<endl;
    int n;
    cin>>n;
    vector<int> arr;
    cout<<"Enter the stocks: "<<endl;
    for(int i=0; i<n; i++)
    {
        int z;
        cin>>z;
        arr.push_back(z);
    }
    cout<<"Enter no. of transactions: "<<endl;
    int k;
    cin>>k;
    int dp[k+1][n];
    for(int i=0; i<k+1; i++)
        for(int j=0; j<n; j++)
            dp[i][j]=0;
    for(int t=1; t<=k; t++)
    {
        int max=INT_MIN;
        for(int d=1; d < arr.size(); d++)
        {
            
                 if(dp[t-1][d-1]-arr[d-1] > max)
                 {
                     max = dp[t-1][d-1]-arr[d-1];
                 }
                 if(max+arr[d]>dp[t][d-1])
                 {
                    dp[t][d]= max+ arr[d];
                 }
                 else{
                    dp[t][d]= max+ arr[d-1];
                 }
        }
        
        cout<<endl;

    }
    cout<<dp[k][n-1];
    return 0;
}