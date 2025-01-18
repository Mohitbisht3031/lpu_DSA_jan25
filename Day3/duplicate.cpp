#include<bits/stdc++.h>
using namespace std;

// TC : O(N) , SC: O(1)
bool checkDuplicate(string str){
    vector<int>mp(26,0); // of making a vector of size 26 where each block is init with 0

    for(int i = 0 ;i<str.size();i++){
        if(mp[str[i] - 'a'] > 0)return 1;
        mp[str[i] - 'a']++;
    }
    return 0;
}