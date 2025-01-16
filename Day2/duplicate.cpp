#include<bits/stdc++.h>
using namespace std;

// TC : O(n^2)
bool checkDuplicate(string str){
    for(int i = 0;i<str.size();i++){
        for(int j = i+1;j<str.size();j++){
            if(str[i] == str[j])return 1;
        }
    }
    return 0;
}
// using map TC: O(n) & SC : O(n)
bool checkDuplicate(string str){
    unordered_map<char,int>mp; // O(n)
    for(int i = 0;i<str.size();i++){
        if(mp.count(str[i]) == 1){
            return 1;
        }
        mp[str[i]]++;
    } // O(n)
    return 0;
}
int main(){return 0;}