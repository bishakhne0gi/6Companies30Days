#include <bits/stdc++.h>
using namespace std;
string compress(string str)
{
    int n=str.length();
    int count=1;
     string output;
    for(int i=0; i<n; i++)
    {
        count=1;
       
        while(i<n-1 && str[i]==str[i+1])
        {
            count++;
            i++;
        }
        cout<<str[i];
        output+=str[i];
        output+=to_string(count);

    }
    if(output.length()>str.length())
        return str;
    return output;
}
int main()
{
    string str;
    cin>>str;
    cout<<compress(str);
    return 0;
}