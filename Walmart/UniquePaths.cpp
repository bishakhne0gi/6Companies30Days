#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int NumberOfPath(int a, int b)
    {
        vector<vector<int>> dp(a, vector<int>(b, 0));
        dp[0][0] = 1;

        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                if (i == 0 and j == 0)
                    continue;
                else if (i == 0)
                {
                    dp[i][j] += dp[i][j - 1];
                }
                else if (j == 0)
                {
                    dp[i][j] += dp[i - 1][j];
                }
                else
                {
                    dp[i][j] += (dp[i - 1][j] + dp[i][j - 1]);
                }
            }
        }

        return dp[a - 1][b - 1];
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        Solution ob;
        cout << ob.NumberOfPath(a, b) << endl;
    }
}
