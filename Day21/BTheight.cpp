#include<bits/stdc++.h>
using namespace std;

class BTnode{
    public:
    int val;
    BTnode*left;
    BTnode*right;
    BTnode(int val){
        this->val = val;
    }
};

// recursive approach
int h(BTnode*root){
    if(!root)return 0;
    int lh = h(root->left);
    int rh = h(root->right);

    return max(lh,rh)+1;
}

// iterative approach
int h(BTnode*root){
    if(!root)return 0;
    queue<BTnode*>q;
    q.push(root);
    int c = 0;
    while(!q.empty()){
        int s = q.size();
        c++;
        for(int i = 0 ;i<s;i++){
            auto f = q.front();
            q.pop();
            if(f->left)q.push(f->left);
            if(f->right)q.push(f->right);
        }
    }
    return c;
}
