#include<bits/stdc++.h>
using namespace std;

void duplicate(vector<int>&arr){ // negative marking approach
    for(int i=0;i<arr.size();i++){
        int idx = abs(arr[i]) - 1;
        if(arr[idx] < 0){
            cout << abs(arr[i]);
        }
        else{
            arr[idx] *= -1;
        }
    }
    return ;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    duplicate(arr);
    // out == true ? cout << "Dulicate found" : cout << "No dup !";
    return 0;
    
}