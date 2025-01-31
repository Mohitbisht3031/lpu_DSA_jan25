#include<bits/stdc++.h>
using namespace std;

bool redundent(string &str){
    stack<char>stk;
    string ops = "+-*/%";
    for(int i = 0 ;i<str.size();i++){
        if(str[i] == '(' || ops.find(str[i]) != string::npos)stk.push(str[i]);
        else{
            bool f = 0;
            while(!stk.empty() && stk.top() != '('){
                stk.pop();
                f = 1;
            }
            stk.pop();
            if(!f)return 1;
        }
    }
    return 0;
}