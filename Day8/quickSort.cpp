#include<bits/stdc++.h>
using namespace std;

//TC: O(nlogn) -> n = no. of elements in the array
int helper(vector<int>&v,int s,int e){
    int c = 0;
    for(int i = s+1;i<=e;i++){
        if(v[s] > v[i])c++;
    }
    swap(v[s],v[s+c]);
    int i=s;
    int j= e;
    while(i <= (s+c) && j>= s+c){
        if(v[i] > v[s+c] && v[j] < v[s+c]){
            swap(v[i],v[j]);
            i++;
            j--;
        }else if(v[j] >= v[s+c]){
            j--;
        }else i++;
    }

    return s+c;
}

void quickSort(vector<int>&v,int s,int e){
    if(s >= e)return ;
    int p = helper(v,s,e);
    quickSort(v,s,p);
    quickSort(v,p+1,e);
}

void quickSort(vector<int>&v){
    if(v.size() <= 1)return ;
    quickSort(v,0,v.size()-1);
}