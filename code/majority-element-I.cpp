#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int majorityElement(vector<int> &arr)
    {
        // Boyer Moore : Extract The Candidate
        int candidate = arr[0];
        int count = 1;
        for (int i = 1; i < arr.size(); i++)
        {
            if (count == 0)
            {
                candidate = arr[i];
                count = 1;
            }
            if (arr[i] == candidate)
            {
                count++;
            }
            else
            {
                count--;
            }
        }

        return candidate;
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

    cout << obj.majorityElement(arr);

    return 0;
}