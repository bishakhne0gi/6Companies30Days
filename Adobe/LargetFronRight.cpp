#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> leaders(int a[], int n)
    {
        vector<int> fin;
        fin.push_back(a[n - 1]);
        int max_right = a[n - 1];

        for (int i = n - 2; i >= 0; i--)
        {
            if (a[i] >= max_right)
            {
                fin.push_back(a[i]);
                max_right = a[i];
            }
        }
        reverse(fin.begin(), fin.end());
        return fin;
    }
};
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        int a[n];

        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Solution obj;
        vector<int> v = obj.leaders(a, n);

        for (auto it = v.begin(); it != v.end(); it++)
        {
            cout << *it << " ";
        }

        cout << endl;
    }
}