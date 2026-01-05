// You have been given an array of size n. Find the minimum length of subsequence of
// elements whose LCM is equal to the LCM of the array.suppose the arr = 1,2,4,5 the LCM = 20 .
// Find the minimum number of elements whose LCM is 20. Here 4,5 LCM is 20 equal to the array
// LCM

#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int lcm(int a, int b)
{ // a * b = lcm * gcd;
    return (a / gcd(a, b)) * b;
}

int main()
{
    int n;
    cin >> n;
    vector<int> larr(n);
    for (int i = 0; i < n; i++)
        cin >> larr[i];

    // LCM
    int tlcm = 1;
    for (int i = 0; i < n; i++)
        tlcm = lcm(tlcm, larr[i]);

    cout << "tlcm: " << tlcm << endl;

    for (int it : larr)
        cout << it << " ";
    cout << endl;

    // appch.

    sort(valid.rbegin(), valid.rend());

    int currlcm = 1;
    int count = 0;
    for (int it : valid)
    {
        int newlcm = lcm(currlcm, it);
        if (newlcm != currlcm)
        {
            currlcm = newlcm;
            count++;
        }
        if (currlcm == tlcm)
            break;
    }
    cout << count << endl;
    return 0;
}