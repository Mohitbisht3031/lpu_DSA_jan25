#include<bits/stdc++.h> //header file
using namespace std; // defines which namespace we are supposed to use

int main(){
    // queue<int>q;
    // // insert
    // q.push(10);
    // q.push(20);
    // q.push(30);
    // q.push(40);

    // // front
    // cout<<q.front()<<endl;
    // cout<<q.size()<<endl;
    // // pop/remove
    // q.pop();

    // cout<<q.front()<<endl;
    // cout<<q.size()<<endl;

    // while(!q.empty()){
    //     int f = q.front();
    //     q.pop();
    //     cout<<f<<endl;
    // }

    stack<int>stk;
    stk.push(10);
    stk.push(20);
    stk.push(30);
    stk.push(40);

    // top ele
    cout<<stk.top()<<endl;

    // pop
    stk.pop();

    cout<<stk.top()<<endl;

    cout<<"----"<<endl;
    while(stk.size() > 0){
        int t = stk.top();
        stk.pop();
        cout<<t<<endl;
    }

    return 0;
}