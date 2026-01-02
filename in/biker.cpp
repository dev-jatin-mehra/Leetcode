// brute : arr[i] == 0 && arr[j] == 1 count++;

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    vector<int> bikers(T);
    for (int i = 0; i < T; i++)
        cin >> bikers[i];

    if(T==0){
        cout << 0;
        return 0;
    }

    long long countN = 0, countC = 0; // if T is bery large
    for(int i=0;i<T;i++){
        if(bikers[i]==0){
            countN++;
        }
        else{
            countC+=countN;
        }
    }

    cout << countC;
    return 0;
}