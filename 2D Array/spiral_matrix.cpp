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
    
    int row_start = 0;
    int row_end = n-1;
    int col_start = 0;
    int col_end = m-1;
    
    while(row_start<=row_end && col_start<=col_end){
        // for the first row;
        for(int i=col_start;i<=col_end;i++){
            cout<<arr[row_start][i]<<" ";
        }
        row_start++;
        
        // for the the last column
        for(int i=row_start;i<=row_end;i++){
            cout<<arr[i][col_end]<<" ";
        }
        col_end--;
        
        // last row;
        if(row_start<=row_end){
            for(int i=col_end;i>=col_start;i--){
                cout<<arr[row_end][i]<<" ";
            }
        }
        row_end--;
        
        // for the first column
        if(col_start<=col_end){
            for(int i=row_end;i>=row_start;i--){
                cout<<arr[i][col_start]<<" ";
            }
        }
        col_start++;
    }
    
}





//  [[1,2,3],[4,5,6],[7,8,9]]
//  Result 1 2 3 6 9 8 7 4 5
//  row_start = 0;
//  row_End = n -1;
//  col_Start = 0;
//  col_end = m -1;
//  1 2 3 - > [0,0] [0,1] [0,2] [row_start,col_Start] [row_start,col_Start++] [row_start][col_Start++/col_end]
//  for(int i=col_Start;i<=col_end;i++){
//      cout<<arr[row_start][i];
//  }
//  row_start++;
//  res 1 2 3 - >
//  3 6 9 - >  [1,2] [2,2]  [row_start++,col_end] [row_start++/row_End,col_end]
//  res 1 2 3 6 9
//  col_end--;

//  9 8 7 ->  [2,1] [2,0] [row_End,col_end--] [row_End][col_end--/col_Start]
//  for(int i = col_end;i>=col_Start;i--){
//      cout<<arr[row_End][i]<<" ";
//  }
//  1 2 3 6 9 8 7
//  row_End--;
//  7 4 [1,0]  [row_End--,col_Start]; 
//     for(int i=row_End;i>=row_start;i--){
//         cout<<arr[i][col_Start]<<" ";
//     }
