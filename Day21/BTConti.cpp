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

void levelOrderTraversal(BTnode*root){
    if(!root)return ;
    queue<BTnode*>q;
    q.push(root);
    while(!q.empty()){
        int s = q.size();
        for(int i = 0;i<s;i++){
            auto f = q.front();
            q.pop();
            cout<<f->val<<" ";
            if(f->left)q.push(f->left);
            if(f->right)q.push(f->right);
        }
        cout<<endl;
    }
    return;
}