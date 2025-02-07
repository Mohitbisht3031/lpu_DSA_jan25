#include<bits/stdc++.h>
using namespace std;

class GTnode{
    public:
    int val;
    vector<GTnode*>child;
    GTnode(int val){
        this->val = val;
    }
};

int maxiSum(GTnode*root){
    if(!root)return 0;
    int ans = root->val;
    for(int i = 0;i<root->child.size();i++){
        ans+=root->child[i];
    }
    for(int i = 0;i<root->child.size();i++){
        int v = maxiSum(root->child[i]);
        ans = max(ans,v);
    }

    return ans;
}