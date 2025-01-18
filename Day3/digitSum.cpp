#include<bits/stdc++.h>
using namespace std;

int digitSum(int n){
    if(n>= 1 && n <= 9)return n;
    int d = n%10;
    n/=10;
    int ans = digitSum(n);
    return ans + d;
}