/*
 Given strings s1, s2, and s3, find whether s3 is formed by an interleaving of s1 and s2.

An interleaving of two strings s and t is a configuration where s and t are divided into n and m substrings respectively, such that:

s = s1 + s2 + ... + sn
t = t1 + t2 + ... + tm
|n - m| <= 1
The interleaving is s1 + t1 + s2 + t2 + s3 + t3 + ... or t1 + s1 + t2 + s2 + t3 + s3 + ...
Note: a + b is the concatenation of strings a and b.
Example 1:

Input: s1 = "aabcc", s2 = "dbbca", s3 = "aadbbcbcac"
Output: true
Explanation: One way to obtain s3 is:
Split s1 into s1 = "aa" + "bc" + "c", and s2 into s2 = "dbbc" + "a".
Interleaving the two splits, we get "aa" + "dbbc" + "bc" + "a" + "c" = "aadbbcbcac".
Since s3 can be obtained by interleaving s1 and s2, we return true.
*/

#include <bits/stdc++.h>
using namespace std;

// class Solution
// {
//     bool hiii(string s1, string s2, string s3, int l1, int l2, int l3)
//     {
//         if (l1 < 0 && l2 < 0 && l3 < 0)
//         {
//             return true;
//         }
//         if (l1 >= 0 && s1[l1] == s3[l3] && l2 >= 0 && s2[l2] == s3[l3])
//         {
//             return hiii(s1, s2, s3, l1 - 1, l2, l3 - 1) || hiii(s1, s2, s3, l1, l2 - 1, l3 - 1);
//         }
//         else if (l1 >= 0 && s1[l1] == s3[l3])
//         {
//             return hiii(s1, s2, s3, l1 - 1, l2, l3 - 1);
//         }
//         else if (l2 >= 0 && s2[l2] == s3[l3])
//         {
//             return hiii(s1, s2, s3, l1, l2 - 1, l3 - 1);
//         }
//         else return false;
//     }

// public:
//     bool isInterleave(string s1, string s2, string s3)
//     {
//         int l1 = s1.length();
//         int l2 = s2.length();
//         int l3 = s3.length();
//         if(s3.size()!=s1.size()+s2.size())
//         {
//             return false;
//         }
//         return hiii(s1, s2, s3, l1-1, l2-1, l3-1);
//     }
// };

class Solution
{
public:
    bool helper(string &s1, string &s2, string &s3, int l1, int l2, int l3)
    {
        if (l1 < 0 && l2 < 0 && l3 < 0)
        {
            return true;
        }
        if (l1 >= 0 && s1[l1] == s3[l3] && l2 >= 0 && s2[l2] == s3[l3])
        {
            return (helper(s1, s2, s3, l1 - 1, l2, l3 - 1) || helper(s1, s2, s3, l1, l2 - 1, l3 - 1));
        }
        else if (l1 >= 0 && s1[l1] == s3[l3])
            return helper(s1, s2, s3, l1 - 1, l2, l3 - 1);

        else if (l2 >= 0 && s2[l2] == s3[l3])
            return helper(s1, s2, s3, l1, l2 - 1, l3 - 1);

        else
            return false;
    }

    bool isInterleave(string s1, string s2, string s3)
    {
        if (s3.size() != s1.size() + s2.size())
            return false;
        return helper(s1, s2, s3, s1.size() - 1, s2.size() - 1, s3.size() - 1);
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2, s3;
        cin >> s1 >> s2 >> s3;
        Solution o1;

        if (o1.isInterleave(s1, s2, s3) )
            cout << "true\n";
        else
            cout << "false\n";
    }
}