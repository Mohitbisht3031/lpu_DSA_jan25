#include<bits/stdc++.h>
using namespace std;

bool helper(string &str,int i,int j){
    if(i >= j)return 1; // base
    if(str[i] != str[j])return 0; // my part
    return helper(str,i+1,j-1); // recursive call!
}

bool palindrome(string str){
    if(str.size() <= 1)return 1;
    return helper(str,0,str.size()-1);
}

int main(){
    return 0;
}