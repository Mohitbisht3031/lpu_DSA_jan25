#include<bits/stdc++.h>
using namespace std;

// TC : O(n^2) , SC:O(1)
void selectionSort(vector<int>&arr){
    for(int i =0;i<arr.size()-1;i++){
        int mi = i;
        for(int j = i+!;j<arr.size();j++){
            if(arr[j] < arr[mi]){
                mi = j;
                swap(arr[mi],arr[i]);
            }
        }
    }
    return;
}