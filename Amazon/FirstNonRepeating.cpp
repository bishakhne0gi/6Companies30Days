#include <bits/stdc++.h>
using namespace std;
string firstNonRepeating(string A)
{
    vector<int> vis(26,0);
    string ans="";
    vector<char>v;
    int n=A.length();
    for(int i=0; i<n; i++)
    {
        if(!vis[A[i]-'a'])
        {
            v.push_back(A[i]);
        }
        vis[A[i]-'a']++;
        int m=v.size();
        for(int i=0; i<m; i++)
        {
            if(vis[v[i]-'a']==1)
            {
                ans.push_back(v[i]);
                f=1;
                break;
            }
        }
        if(f==0)
            ans.push_back('#');
    }
    return ans;
}
int main()
{
    cout<<"Enter the string: "<<endl;
    string s;
    cin>>s;
    cout<<firstNonRepeating(s)<<endl;
    return 0;
}