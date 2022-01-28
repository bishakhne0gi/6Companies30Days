#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
class Solution
{
public:
    long long power(long long N, long long R)
    {
        long long M = 1000000007, ans = 1;
        while (R)
        {
            if (R & 1LL)
            {
                ans = (ans * N) % M;
            }

            R = R / 2;
            N = (N * N) % M;
        }

        return ans;
    }
};
long long rev(long long n)
{
    long long rev_num = 0;
    while (n > 0)
    {
        rev_num = rev_num * 10 + n % 10;
        n = n / 10;
    }
    return rev_num;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long N;
        cin >> N;
        long long R = 0;
        R = rev(N);
        Solution ob;
        long long ans = ob.power(N, R);
        cout << ans << endl;
    }
}