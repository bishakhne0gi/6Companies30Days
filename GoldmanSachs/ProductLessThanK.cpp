#include <bits/stdc++.h>
using namespace std;
 
int countSubArrayProductLessThanK(const vector<int> a,
                                  int k)
{
    int n = a.size();
    int p = 1;
    int res = 0;
    for (int start = 0, end = 0; end < n; end++) {
        p *= a[end];
        while (start < end && p >= k)
            p /= a[start++];
        if (p < k) {
            int len = end - start + 1;
            res += len;
        }
    }
 
    return res;
}
int main()
{
    int n;
    cout<<"Enter the number to be entered: "<<endl;
    cin>> n;
    vector<int> a;
      int k;
    cout<<"Enter the numbers: "<<endl;
    for(int i=0; i<n; i++)
    {
        int z;
        cin>>z;
        a.push_back(z);
    }
    cout<<"Enter the product"<<endl;
    cin>>k;
    cout<<"Number of subarrays are: "<<countSubArrayProductLessThanK(a,k)<<endl;
    return 0;
}