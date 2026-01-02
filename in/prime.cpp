#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    // for(int i=2;i<n;i++){ // for optimized way : sqrt(n)
    //     if(n%i == 0){
    //         cout << "Not a prime number";
    //         return 0;
    //     }
    // }
    // cout << "Prime number" ;

    if(n<=1){
        cout << "not prime";
    }
    else if(n==2) cout << "prime";
    else if(n%2==0) cout << "not prime";
    else{
        for(int i=3;i<=sqrt(n);i++){
            if(n%i==0){
                cout << "not prime";
                return 0;
            }
        }
        cout << "prime";
    }
    return 0;
}