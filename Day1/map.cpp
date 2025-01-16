#include<bits/stdc++.h>
using namespace std;

int main(){
    // unordered_map<char,int>mp;
    map<char,int>mp;
    mp['M'] = 1;
    mp['o'] = 2;
    mp['h'] = 3;
    mp['i'] = 4;
    mp['t'] = 5;

    // for(unordered_map<char,int>::iterator it = mp.begin();it != mp.end();it++){
    //     cout<<it->first<<" "<<it->second<<endl;
    // }

    // for ordeered map
    for(auto it : mp.begin();it!= mp.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }

    return  0;
}