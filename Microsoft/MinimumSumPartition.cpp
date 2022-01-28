#include <bits/stdc++.h>
using namespace std;
class Solution{

  public:
	int minDifference(int arr[], int n)  {
	    int range=0;
	    for(int i=0;i<n;i++){
	        range+=arr[i];
	    }
	    
	    int sum = range/2;
	    
	    int bi = 1;
	    bool dp[2][sum+1];
        for(int i=0;i<2;i++){
            dp[i][0] = true;
        }
      
        for (int j = 1; j <= sum; j++) {
            dp[0][j] = false; 
        }
        for(int i=1;i<=n;i++){
            bi = (i&1);
            for(int j=1;j<=sum;j++){
                if(arr[i-1] <= j)
                    dp[bi][j] = dp[1-bi][j-arr[i-1]] || dp[1-bi][j];
                else 
                    dp[bi][j] = dp[1-bi][j];
            }
        }
        
        int ans = sum;
	    for(int i=sum; i>= 0; i--)
	    {
	        if(dp[bi][i]==true)
	        {
	            ans  = range - (2*i);
	            break;
	        }
	    }
	    return ans;
	}	
};
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}  