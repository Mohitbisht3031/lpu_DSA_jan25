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

// iterativte 
GTnode* make(){
    int v;
    cin>>v;
    if(v == -1)return nullptr;
    GTnode*root = new GTnode(v);
    queue<GTnode*>q;
    q.push(root);
    while(!q.empty()){
        auto f = q.front();
        q.pop();
        cout<<"How many child does "<<f->val<<" have?"<<endl;
        int n;
        cin>>n;
        for(int i = 0;i<n;i++){
            cout<<"insert the "<<i+1<<"th child of "<<f->val<<endl;
            int cv;
            cin>>cv;
            if(cv != -1){
                GTnode*cn = new GTnode(cv);
                f->child.push_back(cn);
                q.push(cn);
            }
        }
    }
    return root;
}

// iterative
void print(GTnode*root){
    if(!root)return;
    queue<GTnode*>q;
    q.push(root);
    while(!q.empty()){
        auto f = q.front();
        q.pop();
        cout<<f->val<<":";
        for(int i = 0;i<f->child.size();i++){
            cout<<f->child[i]<<",";
            q.push(f->child[i]);
        }
        cout<<endl;
    }
    return;
}