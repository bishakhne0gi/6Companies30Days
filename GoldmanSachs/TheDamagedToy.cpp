#include <bits/stdc++.h>
using namespace std;
int lastPosition(int n, int m, int k)
{
    if (m <= n - k + 1)
        return m + k - 1;
    m = m - (n - k + 1);
    return (m % n == 0) ? n : (m % n);
}
int main()
{
    cout<<"Size of the circle: ";
    int n;
    cin>>n;
    cout<<"No. of elements to be entered: ";
    int m;
    cin>>m;
    cout<<"Initial position: ";
    int k;
    cin>>k;
    cout << lastPosition(n, m, k);
    return 0;
}