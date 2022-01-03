#include<bits/stdc++.h>
using namespace std;
string gcd(string str1, string str2)
{
    if (str1.length() < str2.length())
    {
        return gcd(str2, str1);
    }
    else if(str1.find(str2) != 0)
    {
        return "";
    }
    else if (str2 == "")
    {
        return str1;
    }
    else
    {
        return gcd(str1.substr(str2.length()), str2);
    }
}
string findGCD(vector<string> arr)
{
    string result = arr[0];
    int n=arr.size();
    for (int i = 1; i < n; i++)
    {
        result = gcd(result, arr[i]);
    }
    return result;
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
        string z;
        cin>>z;
        arr.push_back(z);
    }
    cout<<findGCD(arr)<<endl;
    return 0;
}