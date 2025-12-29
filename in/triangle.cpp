#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){

    int n= 5;
    for(int i=1;i<=5;i++){ // rows
        for(int j=i;j< 5 ;j++) { // spaces
            cout << " ";
        }
        for(int j=1;j<=2*i-1;j++){
            if (j == 1 || j == (2 * i - 1) || i == n) { // hollow 
                cout << "*";
            } 
            else {
                cout << " "; // Print space inside the triangle
            }
        }
        cout << endl;
    }
    return 0;
}