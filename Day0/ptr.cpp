#include<bits/stdc++.h> //header file
using namespace std; // defines which namespace we are supposed to use

int main(){
    // cout<<"hii, welcome to this new class"<<endl;
    int a = 10;
    int* ptr = &a;

    char ch = 'M';
    char*ptrCh = &ch;

    if(ptr == ptrCh){
        cout<<"same"<<endl;
    }else cout<<"not same"<<endl;

    // cout<<ptr<<" the value that is stored in this location is "<<*ptr<<endl;
    // int**ptr2 = &ptr;
    // int***ptr3 = &ptr2;
    // // update value of a to 20 using ptr3 
    // ***ptr3 = 20;
    // cout<<ptr3<<" the value that is stored in this location is "<<***ptr3<<endl;
    // cout<<a<<endl;

    return 0;
}