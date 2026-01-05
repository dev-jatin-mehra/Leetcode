// There are n gas stations along a circular route, where the amount of gas at the ith station is gas[i].
// You have a car with an unlimited gas tank and it costs cost[i] of gas to travel from the ith station to its next (i + 1)th station. You begin the journey with an empty tank at one of the gas stations.
// Given two integer arrays gas and cost, return the starting gas station's index if you can travel around the circuit once in the clockwise direction, otherwise return -1. If there exists a solution, it is guaranteed to be unique.

#include <bits/stdc++.h>
using namespace std;

// int gasStation(vector<int> &gas, vector<int> &cost, int n) // brute
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (gas[i] < cost[i])
//             continue;
//         int j = (i + 1) % n;
//         int gasEarnedNext = gas[j];
//         int costMoving = cost[i];
//         int currgas = gas[i] - costMoving + gasEarnedNext;

//         while (j != i)
//         {
//             if (currgas < cost[j])
//                 break;
//             int costMovingj = cost[j];
//             j = (j + 1) % n;
//             int gasEarnedNextj = gas[j];
//             currgas = currgas - costMovingj + gasEarnedNextj;
//         }
//         if (j == i)
//             return i;
//     }
//     return -1;
}

int gasStation(vector<int> &gas, vector<int> &cost, int n)
{ // greedy
    int totalEarn = accumulate(gas.begin(), gas.end(), 0);
    int totalSpend = accumulate(cost.begin(), cost.end(), 0);

    if (totalEarn < totalSpend)
        return -1;

    int total = 0;
    int result = 0;

    for (int i = 0; i < n; i++)
    {
        total += gas[i] - cost[i];
        if (total < 0)
        {
            total = 0;
            result = i + 1;
        }
    }

    return result;
}

int main()
{
    int n;
    cin >> n;
    vector<int> gas(n);
    vector<int> cost(n);
    for (int i = 0; i < n; i++)
        cin >> gas[i];
    for (int i = 0; i < n; i++)
        cin >> cost[i];
    cout << gasStation(gas, cost, n);
    return 0;
}