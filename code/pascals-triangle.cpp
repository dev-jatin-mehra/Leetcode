#include "bits/stdc++.h"
using namespace std;

class Solution
{
public:
    vector<vector<int>> pascals(int n)
    {
        vector<vector<int>> store(n);
        for (int i = 0; i < n; i++)
        {
            store[i] = vector<int>(i + 1, 1);
            for (int j = 1; j < i; j++)
            {
                store[i][j] = store[i - 1][j] + store[i - 1][j - 1];
            }
        }
        return store;
    }
};

int main()
{
    Solution obj;
    int n;
    cin >> n;
    vector<vector<int>> result = obj.pascals(n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}