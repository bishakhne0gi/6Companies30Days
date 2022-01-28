#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool winnerOfGame(string colors)
    {
        int count_A = 0, count_B = 0;
        if (s.size() <= 2)
            return false;
        for (int i = 1; i < (int)s.size() - 1; i++)
        {
            if (s[i] == 'A' and s[i - 1] == 'A' and s[i + 1] == 'A')
            {
                count_A++;
            }
            if (s[i] == 'B' and s[i - 1] == 'B' and s[i + 1] == 'B')
            {
                count_B++;
            }
        }
        return count_A > count_B ? true : false;
    }
};