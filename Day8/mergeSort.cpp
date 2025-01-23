#include<bits/stdc++.h>
using namespace std;

// TC : O(nlogn) -> n = no. of elements in the array!
void merge(vector<int>&arr,int s,int e){
    int mid = s+(e-s)/2;
    vector<int>v;
    int i = 0;
    int j = mid+1;
    while(i <= mid && j<=e){
        if(arr[i] <= arr[j]){
            v.push_back(arr[i]);
            i++;
        }else{
            v.push_back(arr[j]);
            j++;
        }
    }

    while(i <= mid){
        v.push_back(arr[i]);
        i++;
    }
    while(j <= e){
        v.push_back(arr[j]);
        j++;
    }
    arr = v;
    return;
}

void mergeSort(vector<int>&arr,int s,int e){
    if(s >= e)return;
    int mid = s+(e-s)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    merge(arr,s,e);
}

void mergeSort(vector<int>&arr){
    if(arr.size() < =1)return;
    mergeSort(arr,0,arr.size()-1);
}