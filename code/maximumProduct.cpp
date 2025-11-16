#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int MaximumProductSubarray(vector<int> &nums) // O(n^3) + O(n^2)
    {
        // vector<vector<int>> subarrayStore;
        // for (int i = 0; i < nums.size(); i++) // O(n)
        // {
        //     for (int j = i; j < nums.size(); j++) // O(n)
        //     {
        //         vector<int> subStore;
        //         for (int k = i; k <= j; k++) // O(n) -> final case
        //         {
        //             subStore.push_back(nums[k]);
        //         }
        //         subarrayStore.push_back(subStore);
        //     }
        // }

        // int maxmProd = 0;
        // for (int i = 0; i < subarrayStore.size(); i++)
        // {
        //     int currentProd = 1;
        //     for (int it : subarrayStore[i])
        //     {
        //         currentProd *= it;
        //     }
        //     maxmProd = max(currentProd, maxmProd);
        // }

        // return maxmProd;

        // int maxProd = INT_MIN; // O(n^2)
        // for (int i = 0; i < nums.size(); i++)
        // {
        //     int currProd = 1;
        //     for (int j = i; j < nums.size(); j++)
        //     {
        //         currProd *= nums[j];
        //         maxProd = max(maxProd, currProd);
        //     }
        // }
        // return maxProd;

        // O(n)

        int maxProd = INT_MIN;
        int prefix = 1, suffix = 1;
        for (int i = 0; i < nums.size(); i++)
        {
            if (prefix == 0)
            {
                prefix = 1;
            }

            prefix = prefix * nums[i];
            maxProd = max(maxProd, prefix);
        }

        for (int i = nums.size() - 1; i >= 0; i--)
        {
            if (suffix == 0)
            {
                suffix = 1;
            }

            suffix = suffix * nums[i];
            maxProd = max(maxProd, suffix);
        }

        return maxProd;
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

    cout << obj.MaximumProductSubarray(arr);

    return 0;
}

/*
Test case :
nums = [2,3,-2,4]
maxProd = INT_MIN
prefix = 1
0. prefix * 2  = 2  prefix = 2  maxProd = 2
1. prefix * 3 = 6   prefix = 6  maxProd = 6 FInal Answer
2. prefix * -2 = -12 ans all other negatives

Test Case :
nums = [-2,0,-1]
maxProd = INT_MIN
prefix = 1

0. prefix * -2 = -2     prefix = -2     maxProd = -2
1. prefix * 0 = 0       prefix = 0      maxProd = 0
3. prefix * -1 = 0      prefix = 0      maxProd = 0 Final Ans
*/