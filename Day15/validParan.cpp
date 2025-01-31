#include<bits/stdc++.h>
using namespace std;

bool validParan(string &str){
    stack<char>stk;
    for(int i = 0;i<str.size();i++){
        if(str[i] == '('){
            stk.push(stk[i]);
        }else{
            if(stk.size() > 0 && stk.top() == '('){
                stk.pop();
            }else return false;
        }
    }
    return 1;
}