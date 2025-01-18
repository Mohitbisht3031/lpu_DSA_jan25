#include<bits/stdc++.h>
using namespace std;

int fibo(int n){
    if(n <= 2)return 1;
    int f = 1;
    int s = 1;
    for(int i = 3;i<=n;i++){
        int n = f+s;
        f = s;
        s = n;
    }
    return s;
}

// recursion
int fibo(int n){
    if(n <= 2)return 1;
    
    int ans1 = fibo(n-1);
    int ans2 = fibo(n-2);
    
    return ans1+ans2;
}