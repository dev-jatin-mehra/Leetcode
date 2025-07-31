#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    void rotate(vector<int> &arr)
    {
        int start_num = arr[0];
        for (int i = 1; i < arr.size(); i++)
        {
            arr[i - 1] = arr[i];
        }
        arr[arr.size() - 1] = start_num;
    }

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

public:
    int maximumCircularSumSubarray(vector<int> &arr)
    {
        int result = -1e4; //-10000
        for (int i = 0; i < arr.size() - 1; i++)
        {
            rotate(arr);
            int sum = kadanes(arr);
            result = max(result, sum);
        }

        return result;
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