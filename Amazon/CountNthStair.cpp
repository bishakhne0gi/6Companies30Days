#include <bits/stdc++.h>
using namespace std;
int climbStairs(int n) {
        int arr[n+1];
        arr[0]=1;
        arr[1]=1;
        for(int i=2; i<=n; i++)
        {
            arr[i]=arr[i-2]+1;
        }
        return arr[n];
    }
int main()
{
    int n;
    cout<<"Enter the number of stairs: "<<endl;
    cin>>n;
    cout<<climbStairs(n);
    return 0;
}