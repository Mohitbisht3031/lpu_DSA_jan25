#include <bits/stdc++.h>
using namespace std;

// TC : O(n^2) and SC : O(1);
int inversionCount(vector<int>&arr){
    int c = 0;
    for(int i = 0;i<arr.size()-1;i++){
        for(int j = i+1;j<arr.size();j++){
            if(arr[i] > arr[j])c++;
        }
    }   
    return c;
}

// o(nlogn)
int merge(vector<int>&arr,int s,int e){
    int mid = s+(e-s)/2;
    inr c = 0;
    int i = s;
    int j = mid+1;
    vector<int>ans;
    while(i <= mid && j <= e){
        if(arr[i] <= arr[j]){
            ans.push_back(arr[i]);
            i++;
        }else{
            ans.push_back(arr[j]);
            c+=((mid-i+1) * (e - j+1));
            j++;
        }
    }
    return c;
}

int mergeSort(vector<int>&arr,int s,int e){
    if(s >= e)return 0;
    int mid = s+(e-s)/2;
    int l = mergeSort(arr,s,mid);
    int r = mergeSort(arr,mid+1,e);

    int m = merge(arr,s,e);
}

int inversionCount(vector<int>&arr){
    if(arr.size() <= 1)return 0;
    return mergeSort(arr,0,arr.size()-1);
}