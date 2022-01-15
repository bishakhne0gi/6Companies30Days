
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        vector<int> fin;
        int l = 0, sum = arr[0];
        int i;
        for (i = 1; i <= n; i++)
        {

            while (sum > s && l < i - 1)
            {
                sum = sum - arr[l];
                l++;
            }
            if (sum == s)
            {
                fin.push_back(l + 1);
                fin.push_back(i);
                return fin;
            }
            if (i < n)
                sum += arr[i];
        }
        fin.push_back(-1);
        return fin;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long s;
        cin >> n >> s;
        int arr[n];
        const int mx = 1e9;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        vector<int> res;
        res = ob.subarraySum(arr, n, s);

        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }
    return 0;
}