#include<bits/stdc++.h>
using namespace std;

// TC : O(n^2) && SC : O(1)
void insertionSort(vector<int>&arr){
    for(int i = 1;i<arr.size();i++){
        int k = arr[i];
        int j = i-1;
        while(j >= 0 && arr[j] > k){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = k;
    }
    return ;
}