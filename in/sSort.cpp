#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 7;
    vector<int>arr(7);
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    
    //logic selection sort
    for(int i=0;i<n-1;i++){
        int min = i;
        for(int j=i+1;j<n;j++){
            if(arr[min] > arr[j]){
                min = j;
            }
        }
        swap(arr[min],arr[i]);
    }
        
    for(int i=0;i<n;i++){
        cout<<arr[i] << " ";
    }
    return 0;
}

/*
While Equi :
int i = 0; 
while (i < n - 1) { 
    int min = i;
    int j = i + 1; 
    while (j < n) { 
        if (arr[min] > arr[j]) {
            min = j;
        }
        j++; 
    }
    swap(arr[min], arr[i]);
    i++; // Increment for the outer loop
}

*/