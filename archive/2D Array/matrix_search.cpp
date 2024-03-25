#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int target;
    cin>>target;
    int row = 0;
    int col = m-1;
    while(row<n && col>=0){
        if(arr[row][col]==target){
            cout<<"True";
            return 0;
        } else if(arr[row][col]>target){
            col--;
        } else{
            row++;
        }
    }
    cout<<"Not found";
}
