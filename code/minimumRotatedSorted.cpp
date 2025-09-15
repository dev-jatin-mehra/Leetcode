#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int MinimumInRotatedSortedArray(vector<int> &nums)
    {
        int l = 0, r = nums.size() - 1;
        while (l < r)
        {
            int mid = l + (r - l) / 2;
            if (nums[mid] > nums[r])
            {
                l = mid + 1;
            }
            else
            {
                r = mid;
            }
        }

        return nums[r];
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
    cout << obj.MinimumInRotatedSortedArray(arr);
    return 0;
}