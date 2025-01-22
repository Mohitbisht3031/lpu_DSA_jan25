#include<bits/stdc++.h>
using namespace std;

int longestSubstring(string str){
    int maxi = 1;
    for(int i = 0;i<str.size();i++){
        vector<int>v(26,0);
        for(int j = i;j<str.size();j++){
            if(v[str[i] - 'a'] > 0){
                maxi = max(maxi,j-i);
                break;
            }
            v[str[i] - 'a']++;
        }
    }
    return maxi;
}

// TC : O(n) , SC : O(1)
int longestSubstring(string str){
    vector<int>v(26,-1);
    int i = 0;
    int j = 0;
    int maxi = 1;
    while(j<str.size()){
        if(v[str[i] - 'a'] != -1){
            i = v[str[i] - 'a'];
        }
        maxi = max(maxi,j-i+1);
        v[str[j] - 'a'] = j;
        j++;
    }
    return maxi;
}

int main(){return 0;}