#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> majorityElement(vector<int> &arr)
    {
        // Boyer Moore

        int maj1 = arr[0], maj2 = arr[1];
        int count1 = 1, count2 = 1;

        for (int i = 2; i < arr.size(); i++)
        {
            if (maj1 == arr[i])
            {
                count1++;
            }
            else if (maj2 == arr[i])
            {
                count2++;
            }
            else if (count1 == 0)
            {
                maj1 = arr[i];
                count1 = 1;
            }
            else if (count2 == 0)
            {
                maj2 = arr[i];
                count2 = 1;
            }
            else
            {
                count1--;
                count2--;
            }
        }

        // verify

        vector<int> res;
        int freq1 = 0, freq2 = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == maj1)
            {
                freq1++;
            }
            else if (arr[i] == maj2)
            {
                freq2++;
            }
        }

        if (freq1 > floor(arr.size() / 3))
        {
            res.push_back(maj1);
        }
        if (freq2 > floor(arr.size() / 3))
        {
            res.push_back(maj2);
        }
        return res;
    }
};

int main()
{
    Solution obj;

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> res = obj.majorityElement(arr);

    for (int it : res)
    {
        cout << it << " ";
    }

    return 0;
}