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

// recursively we are gonna make the tree
GTnode* makeGTRec(){
    cout<<"Can you please enter the value of the node:"<<endl;
    int v;
    cin>>v;
    if(v == -1)return NULL;
    GTnode*root = new GTnode(v);
    cout<<"How many child does it have ?";
    int c;
    cin>>c;
    for(int i = 0;i<c;i++){
        cout<<"making the "<<i+1<<"th child of "<<v<<" node"<<endl;
        GTnode*n = makeGTRec();
        root->child.push_back(n);
    }
    return root;
}

void print(GTnode*root){
    if(!root)return;
    cout<<root->val<<endl;
    for(int i = 0;i<root->child.size();i++){
        print(root->child[i]);
    }
    return ;
}

int main(){
    GTnode* root = makeGTRec();
    print(root);
    return 0;
}