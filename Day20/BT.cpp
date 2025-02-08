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

// recursive
BTnode* make(){
    int v;
    cin>>v;
    if(v == -1)return nullptr;
    BTnode*root = new BTnode(v);
    root->left = make();
    root->right = make();
    return root;
}

// iterative
BTnode* make(){
    int v;
    cin>>v;
    if(v == -1)return nullptr;
    BTnode*root = new BTnode(v);
    queue<BTnode*>q;
    q.push(root);
    while(!q.empty()){
        auto f = q.front();
        q.pop();
        int lc;
        cin>>lc;
        if(lc != -1){
            root->left = new BTnode(lc);
            q.push(lc);
        }
        int rc;
        cin>>rc;
        if(rc != -1){
            root->right = new BTnode(rc);
            q.push(root->right);
        }
    }
    return root;
}

// recursive
// pre -> DLR
void print_rec(BTnode*root){
    if(!root)return;
    cout<<root->val<<endl; //current node 
    print_rec(root->left); // left subtree
    print_rec(root->right); // right subtree
    return;
}

// in -> LDR
void print_rec(BTnode*root){
    if(!root)return;
    print_rec(root->left);
    cout<<root->val<<endl;
    print_rec(root->right);
}
// Post -> LRD
void print_rec(BTnode*root){
    if(!root)return;
    print_rec(root->left);
    print_rec(root->right);
    cout<<root->val<<endl;
}
int main(){
    BTnode*root = make();
    print_rec(root);
    return 0;
}