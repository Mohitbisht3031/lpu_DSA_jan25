#include<bits/stdc++.h> //header file
using namespace std; // defines which namespace we are supposed to use

int main(){
    vector<int>v;
    // insert
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    // pop out
    v.pop_back();

    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    cout<<v[3]<<endl;
    cout<<v.at(3)<<endl;

    // int arr[] = {1,2,3,4,5};
    // int s = sizeof(arr)/sizeof(int);

    return 0;
}