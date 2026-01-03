// 0/1 knapsack
// You are given an array nums, nums[i] = money in the i-th house
// You cannot rob two adjacent houses. Find the maximum money you can rob.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n == 0)
        return 0;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    if (n == 1)
        return arr[0];

    vector<int> dp(n);
    dp[0] = arr[0];
    dp[1] = max(arr[0], arr[1]);

    for (int i = 2; i < n; i++)
    {
        dp[i] = max(dp[i - 1], arr[i] + dp[i - 2]);
    }
    cout << dp[n - 1];
    return 0;
}