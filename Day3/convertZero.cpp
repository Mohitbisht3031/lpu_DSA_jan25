#include<bits/stdc++.h>
using namespace std;

// brute force
//TC O(m*n*(m+n)) , SC O(m*n)
void convert(vector<vector<int>>&mat,int i,int j){
    for(int k = 0;k<mat.size();k++){
        mat[k][j] = 0;
    }
    for(int k = 0;k<mat[0].size();k++){
        mat[i][k] = 0;
    }
    return;
}
vector<vector<int>> convert(vector<vector<int>>&mat){
    vector<vector<int>>ans = mat;
    for(int i = 0;i<mat.size();i++){
        for(int j = 0;j<mat[0].size();j++){
            if(mat[i][j] == 0){
                convert(ans,i,j);
            }
        }
    }
    return ans;
}

// tc : O(m*n), SC: O(m+n)
vector<vector<int>> convert(vector<vector<int>>&mat){
    vector<int>r(mat.size(),0);
    vrctor<int>c(mat[0].size(),0);
    for(int i = 0 ;i<mat.size();i++){
        for(int j= 0 ;j<mat[0].size();j++){
            if(mat[i][j] == 0){
                r[i] = 1;
                c[j] = 1;
            }
        }
    }
    for(int i = 0;i<mat.size();i++){
        for(int j = 0;j<mat[0].size();j++){
            if(r[i] || c[j]){
                mat[i][j] = 0;
            }
        }
    }
    return mat;
}

int main(){
    return 0;
}