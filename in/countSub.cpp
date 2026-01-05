// In this we have given some string and n, we have find total count of string of length that can
// generated using given string s.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countSub(int n, string str)
    {
        int count = 0;
        for (int i = 0; i <= str.length() - n; i++)
        {
            string substring = str.substr(i, n);
            if (substring.length() == n)
                count++;
        }
        return count;
    }
};

int main()
{
    string str;
    cin >> str;
    int n;
    cin >> n;
    Solution obj;
    cout << obj.countSub(n, str) << endl;
    return 0;
}