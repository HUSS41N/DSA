#include <bits/stdc++.h>
using namespace std;


int main(){
    vector<vector<int>> mat = {{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[0].size();j++){
            cout<<i<<j<<" ";
        }
        cout<<endl;
    }
    int sum = 0;
    int n = mat[0].size() -1 ;
    for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[0].size();j++){
            if(i==j){
                sum+= mat[i][j];
            }
            else if(i+j == n){
                sum +=  mat[i][j];
            }
        }
    }
    cout<<sum;

}
