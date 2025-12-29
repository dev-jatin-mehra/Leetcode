#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){

    int n= 5; // square = 5*5
    for(int i=0;i<5;i++){
        for(int j=0;j<7;j++){
            if((i==0 || j==0 ) || (i==4 || j==6)){ // hollow rectsangle or square 
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout << endl;
    }
    return 0;
}