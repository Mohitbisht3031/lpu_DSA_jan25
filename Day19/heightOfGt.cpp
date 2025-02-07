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

// recursion 
int height(GTnode*root){
    if(!root)return 0;
    int ans = 0;
    for(int i = 0;i<root->child.size();i++){
        ans = max(ans,height(root->child[i]));
    }
    return ans+1;
}

// iteration
int height(GTnode*root){
    if(!root)return 0;
    queue<GTnode*>q;
    q.push(root);
    int c = 0;
    while(!q.empty()){
        int s = q.size();
        c++;
        for(int i = 0;i<s;i++){
            auto f = q.front();
            q.pop();
            for(int j = 0;j<f->child.size();j++){
                q.push(f->child[i]);
            }
        }
    }
    return c;
}