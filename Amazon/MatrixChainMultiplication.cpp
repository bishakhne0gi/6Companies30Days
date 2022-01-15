#include <bits/stdc++.h>
using namespace std;
int findCost(vector<int> arr)
{
    vector<vector<int>> temp;
    int q = 0;
    for (int l = 2; l < arr.size(); l++)
    {
        for (int i = 0; i < arr.size() - l; i++)
        {
            int j = i + l;
            temp[i][j] = 1000000;
            for (int k = i + 1; k < j; k++)
            {
                q = temp[i][k] + temp[k][j] + arr[i] * arr[k] * arr[j];
                if (q < temp[i][j])
                {
                    temp[i][j] = q;
                }
            }
        }
    }
    return temp[0][arr.size() - 1];
}
int main()
{
    vector<int> arr = {4, 2, 3, 5, 3};
    cout << findCost(arr);
    return 0;
}