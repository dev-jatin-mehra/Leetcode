#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >>n;
    int real = n;
    int sum = 0;

    while (real > 0)
    {
        // logic of reversing a number is also same 
        int r = real % 10;
        sum = sum * 10 + r;
        real = real / 10;
    }

    if(sum == n){
        cout << " palindrome no.";
    }
    else{
        cout << "Notpalindrome";
    }
    return 0;

}