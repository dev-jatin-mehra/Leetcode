#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    int kadanes(vector<int> &arr)
    {
        int current_max = arr[0], global_max = arr[0];
        for (int i = 1; i < arr.size(); i++)
        {
            current_max = max(arr[i], current_max + arr[i]);
            global_max = max(global_max, current_max);
        }
        return global_max;
    }

    int kadanes_min(vector<int> &arr)
    {
        int current_min = arr[0], global_min = arr[0];
        for (int i = 1; i < arr.size(); i++)
        {
            current_min = min(arr[i], current_min + arr[i]);
            global_min = min(global_min, current_min);
        }
        return global_min;
    }

public:
    int maximumCircularSumSubarray(vector<int> &arr)
    {
        int Tsum = accumulate(arr.begin(), arr.end(), 0);

        int minSum = kadanes_min(arr); // find the min_Sum, Sub it with total sum get the circular max_Sum, compare with maxSum of actual array
        int maxSum = kadanes(arr);     // Proper kadanes

        return maxSum > 0 ? max(Tsum - minSum, maxSum) : maxSum; // for case -> {-1,-1,-1}
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

    cout << obj.maximumCircularSumSubarray(arr);
    return 0;
}