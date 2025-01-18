#include<bits/stdc++.h>
using namespace std;

// iteration
int factorial(int n){
    int ans = 1;
    for(int i = 2;i<=n;i++){
        ans*=i;
    }
    return ans;
}

// recursion
int factorial(int n){
    // base case
    if(n == 0 || n == 1)return 1;
    // recursive call
    int ans = factorial(n-1);
    return ans*n;//my part
}