#include<bits/stdc++.h>
using namespace std;

/*
we are provided with an int vector and we are supposed to return the largest ele present
in the vector
*/
int LargestNumber(vector<int>&arr){
    int maxi = arr[0];
    for(int i = 1;i<arr.size();i++){
        maxi=(arr[i] > maxi ? arr[i] : maxi); // ternary statement
    }

    return maxi;
}

int main(){return 0;}