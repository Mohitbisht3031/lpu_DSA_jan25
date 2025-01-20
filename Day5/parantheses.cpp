#include<bits/stdc++.h>
using namespace std;

void helper(int o,int c,string str,vector<string>&ans){
    if(o == 0 && c == 0){ // base case
        ans.push_back(str);
        return;
    }

    if(o > c)return;
    if(o)helper(o-1,c,str+'(',ans);
    if(c)helper(o,c-1,str+')',ans);

    return;
}

vector<string> generateParantheses(int n){
    vector<string>ans;
    string str ="";
    helper(n,n,str,ans);
    return ans;
}

int main(){
    vector<string>ans = generateParantheses(3);
    for(int i = 0;i<ans.size();i++)cout<<ans[i]<<endl;

    return 0;
}