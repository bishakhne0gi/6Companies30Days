#include <bits/stdc++.h>
using namespace std;
int myAtoi(string s)
{
    int sign = 1;
    int res = 0;
    int index = 0;
    int n = s.size();
    while (index < n && s[index] == ' ')
    {
        index++;
    }
    if (index < n && s[index] == '+')
    {
        sign = 1;
        index++;
    }
    else if (index < n && s[index] == '-')
    {
        sign = -1;
        index++;
    }
    while (index < n && isdigit(s[index]))
    {
        int digit = s[index] - '0';
        if ((res > INT_MAX / 10) || (res == INT_MAX / 10 && digit > INT_MAX % 10))
            return sign == 1 ? INT_MAX : INT_MIN;
        res = 10 * res + digit;
        index++;
    }
    return sign * res;
}
int main()
{
    cout<<"Enter the string: "<<endl;
    string s;
    cinn>>s;
    cout<<myAtoi(s)<<endl;
    return 0;
}
