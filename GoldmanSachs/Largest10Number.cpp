#include <bits/stdc++.h>
using namespace std;

vector<int> findKthLargest(vector<int> &n, int k)
{
    vector<int> res;
    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < n.size(); i++)
    {
        pq.push(n[i]);
        if (pq.size() > k)
        {
            pq.pop();
        }
    }
    while (!pq.empty())
    {
        res.push_back(pq.top());
        pq.pop();
    }

    return res;
}
int main()
{
    vector<int> v{90, 825, 8, 78, 10, 70, 24, 200, 2, 420, 7000, 100};
    vector<int> res = findKthLargest(v, 10);
    for (auto i : res)
        cout << i << " ";
    return 0;
}