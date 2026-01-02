#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> bits;
    if (n == 0)
        bits.push_back(0);
    else if (n == 1)
        bits.push_back(1);
    else
    {
        while (n > 0)
        {
            bits.push_back(n % 2);
            n = n / 2;
        }
    }

    for (int i = bits.size() - 1; i >= 0; i--)
        cout << bits[i] << " ";

    for(int i=0;i<bits.size();i++){
        if(bits[i]==0){
            bits[i] = 1;
        }
        else{
            bits[i] = 0;
        }
    }

    reverse(bits.begin(),bits.end());

    int res = 0;
    for(int i=0;i<bits.size();i++){
        res = res * 2 + bits[i];
    }

    cout << endl << res;

    return 0;
}