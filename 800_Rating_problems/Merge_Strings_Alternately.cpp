#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string mergeAlternately(string word1, string word2)
    {
        string result = "";
        int len1 = word1.size();
        int len2 = word2.size();

        if (len1 >= len2)
        {
            for (int i = 0; i < len1; i++)
            {
                result += word1[i];
                if (i < word2.size())
                {
                    result += word2[i];
                }
            }
        }
        else if (len2 > len1)
        {
            for (int i = 0; i < len2; i++)
            {

                if (i < word1.size())
                {
                    result += word1[i];
                }
                result += word2[i];
            }
        }

        return result;
    }
};