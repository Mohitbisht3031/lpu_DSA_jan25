#include<bits/stdc++.h>
using namespace std;

void helper(string &str,int i,vector<string>&ans,string s,vector<string>&mp){
    if(i >= str.size()){
        ans.push_back(s);
        return;
    }
    for(int j = 0;j<mp[str[i] - '1'];j++){
        s.push_back(mp[str[i] - '1'][j]);
        helper(str,i+1,ans,s,mp);
        s.pop_back();
    }
    return ;
}

vector<string> letter(string &str){
    vector<string>mp={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string>ans;
    string s = "";
    helper(str,0,ans,s,mp);
    return ans;
}
