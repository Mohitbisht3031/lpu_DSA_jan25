#include<bits/stdc++.h>
using namespace std;

vector<int> moveZero(vector<int>&arr){
    vector<int>nArr;
    int c = 0;
    for(int i = 0;i<arr.size();i++){
        if(arr[i] == 0)c++;
        else nArr.push_back(arr[i]);
    }
    for(int i = 0 ;i<c;i++)nArr.push_back(0);
    return nArr;
}

vector<int> moveZero(vector<int>&arr){
    int c = 0;
    for(int i = 0;i<arr.size();i++){
        if(arr[i] == 0)c++;
        else arr[i-c] = arr[i];
    }

    for(int i = arr.size()-c;i<arr.size();i++)arr[i] = 0;
    return arr;
}

vector<int> moveZero(vector<int>&arr){
    int j = 0;
    for(int i = 0;i<arr.size();i++){
        if(arr[i]){
            swap(arr[j],arr[i]);
            j++;
        }
    }
    return arr;
}


int main(){return 0;}