#include <bits/stdc++.h>
using namespace std;
vector<int> max_of_subarrays(vector<int> arr, int n, int k)
{
    vector<int> result;
    deque<int> dq(k);
    int i;
    for (i = 0; i < k; i++)
    {
        while ((!dq.empty()) && arr[i] >= arr[dq.back()])
        {
            dq.pop_back();
        }
        dq.push_back(i);
    }
    for (; i < n; i++)
    {
        result.push_back(arr[dq.front()]);
        while ((!dq.empty()) && dq.front() <= i - k)
        {
            dq.pop_front();
        }
        while ((!dq.empty()) && arr[i] >= arr[dq.back()])
        {
            dq.pop_back();
        }
        dq.push_back(i);
    }
    result.push_back(arr[dq.front()]);
    return result;
}
int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        vector<int> res = ob.max_of_subarrays(arr, n, k);
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}