#include <bits/stdc++.h>
using namespace std;
bool areAnagram(string str1, string str2)
{
    int n1 = str1.length();
    int n2 = str2.length();
    if (n1 != n2)
        return false;
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    for (int i = 0; i < n1; i++)
        if (str1[i] != str2[i])
            return false;
    return true;
}
void findAllAnagrams(vector<string> arr)
{
    int n=arr.size();
    for (int i = 0; i < n; i++)
        for (int j = i+1; j < n; j++)
            if (areAnagram(arr[i], arr[j]))
                cout << "( "<<arr[i] << " , " << arr[j] << " ) "<< endl;
}
int main()
{
    int n;
    cout<<"Enter the number of strings to be entered: "<<endl;
    cin>> n;
    vector<string> arr;
    cout<<"Enter the strings: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    findAllAnagrams(arr);
    return 0;
}