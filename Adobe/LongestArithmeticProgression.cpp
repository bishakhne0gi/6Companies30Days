#include <bits/stdc++.h>
using namespace std;
int longestAp(int arr[], int n)
{
    if(n<=2) return n;
    int table[n][n];
    int maxLength=2;
    for(int i=0; i<n;i++)
    {
        table[i][n-1]=2;
    }
    for(int j=n-2; j>=1; j--)
    {
        int i=j-1, k=j+1;
        while(i>=0 && k<=n-1)
        {
            if(arr[i]+arr[k]<2*arr[j])
                k++;
            else if(arr[i]+arr[k]>2*arr[j])
            {
                table[i][j]=2;
                i--;
            }
            else{
                table[i][j]=table[j][k]+1;
                maxLength=max(maxLength,table[i][j]);
                i--;
                k++;
            }

        }
        whie(i>=0)
        {
            table[i][j]=2;
            i--;
        }
    }

    return maxLength;
}
int main()
{
    int arr[]={1,4,5,7,9,10};
    cout<<longestAp(arr,6)<<endl;
    return 0;
}