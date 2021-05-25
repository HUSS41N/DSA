#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
//   populatiing arry input
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
//   selection sort;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
//   utility fucntion to print the sorted arry
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
