#include<bits/stdc++.h>
using namespace std;

// TC : O(n), SC:o(1)
void bubbleSort(vector<int>&arr){
    for(int i = 0;i<arr.size();i++){
        for(int j = 0;j<n-i-1;j++){
            if(arr[j] > arr[j+1])swap(arr[j],arr[j+1]);
        }
    }
    return ;
}