#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void helper(string &max, string str, int k, int idx)
    {
        if (k == 0)
        {
            return;
        }

        int n = str.length();

        char maxc = str[idx];

        for (int i = idx + 1; i < n; i++)
        { 
            if (maxc < str[i])
            { 
                maxc = str[i];
            }
        }

        if (maxc != str[idx])
        { 
            k--;
        }

        for (int i = idx; i < n; i++)
        {
            if (str[i] == maxc)
            {
                swap(str[idx], str[i]);
                if (str.compare(max) > 0)
                {
                    max = str;
                }
                helper(max, str, k, idx + 1);
                swap(str[i], str[idx]);
            }
        }
    }
    string findMaximumNum(string str, int k)
    {
        string max = str;
        helper(max, str, k, 0);
        return max;
    }
};
int main()
{
    int t, k;
    string str;

    cin >> t;
    while (t--)
    {
        cin >> k >> str;
        Solution ob;
        cout << ob.findMaximumNum(str, k) << endl;
    }
    return 0;
}
// } Driver Code Ends