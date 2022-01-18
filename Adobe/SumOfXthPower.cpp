
#include <bits/stdc++.h>
using namespace std;
long long dp[1001][1001];

long long solve(int num, int power, int base)
{
    if (dp[num][base] != -1)
        return dp[num][base];

    int res = pow(base, power);

    if (res == num)
        return dp[num][base] = 1;

    if (res > num)
        return dp[num][base] = 0;

    long long x = solve(num - res, power, base + 1);
    long long y = solve(num, power, base + 1);

    return dp[num][base] = x + y;
}

long long numOfWays(long long n, int x)
{
    memset(dp, -1, sizeof(dp));
    return solve(n, x, 1);
}
// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        cout << numOfWays(n, x) << endl;
    }
    return 0;
}
// } Driver Code Ends