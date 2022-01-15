#include <bits/stdc++.h>
using namespace std;
int longestMountain(vector<int> &arr)
{
    int n = arr.size();
    int ans = 0;
    for (int i = 1; i <= n - 2;)
    {

        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
        {
            int count = 1;
            int j = i;
            while (j > 0 && arr[j] > arr[j - 1])
            {
                j--;
                count++;
            }
            while (i < n - 1 && arr[i] > arr[i + 1])
            {
                i++;
                count++;
            }
            ans = max(count, ans);
        }
        else
        {
            i++;
        }
    }
    return ans;
}
int main()
{
    cout<<"Enter the number of elements: "<<endl;
    int n;
    cin>>n;
    cout<<"Enter the elements: "<<endl;
    vector<int> arr;
    for(int i=0; i<n; i++)
    {   
        int z;
        cin>>z;
        arr.push_back(z);
    }
    cout<<longestMountain(arr)<<endl;
    return 0;
}
