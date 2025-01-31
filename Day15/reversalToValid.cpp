#include<bits/stdc++.h>
using namespace std;

int reversalOfBrackets(string&str){
    stack<char>stk;
    for(int i = 0;i<str.size();i++){
        if(str[i] == '('){
            stk.push(str[i]);
        }else{
            if(!stk.empty() && stk.top() == '(')stk.pop();
            else stk.push(str[i]); 
        }
    }
    int ans = 0;
    while(!stk.empty()){
        auto ch1 = stk.top();
        stk.pop();
        auto ch2 = stk.top();
        stk.pop();
        if(ch1 == ch2){
            ans++;
        }else ans+=2;
    }
    return ans;
}