#include<bits/stdc++.h>
using namespace std;

bool helper(vector<vector<char>>&mat,string&str,int i,int j,int si){
    if(si >= str.size())return 1;
    if(i < 0 || j<0 || i>= mat.size() || j >= mat[0].size() || mat[i][j] != str[si])return 0;
    char ch = mat[i][j];
    mat[i][j] = '#';
    bool ans = false;
    /*ans = ans || helper(mat,str,i,j-1,si+1);
    ans = ans || helper(mat,str,i,j+1,si+1);
    ans = ans || helper(mat,str,i-1,j,si+1);
    ans = ans || helper(mat,str,i+1,j,si+1);*/
    int dx[] = {0,0,1,-1};
    int dy[] = {1,-1,0,0};
    for(int k = 0;k<4;k++){
        int nx = i+dx[k];
        int ny = j+dy[k];
        ans = ans || helper(mat,str,nx,ny,si+1);
    }
    mat[i][j] = ch;
    return ans;
}

bool makeString(vector<vector<char>>&mat,string str){
    for(int i = 0;i<mat.size();i++){
        for(int j = 0;j<mat[0].size();j++){
            if(mat[i][j] == str[0] && helper(mat,str,i,j,0))return 1;
        }
    }   
    return 0;
}

int main(){
    vector<vector<char>>mat = {{'m','a','b','c'},
                                {'o','h','i','t'},
                                {'z','x','y','a'}};
    cout<<"matrix contains mohit "<<makeString(mat,"mohit")<<endl;
    return 0;
}