#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 7;
    vector<int>arr(7);
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    
    //logic insertion sort
    for(int i=1;i<n;i++){
        int  curr = arr[i];
        int prev = i-1;

        //move the elements
        while(prev>=0 && arr[prev] > curr){
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr;
    }
        
    for(int i=0;i<n;i++){
        cout<<arr[i] << " ";
    }
    return 0;
}