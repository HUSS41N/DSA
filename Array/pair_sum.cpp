// o(n)
#include <iostream>
#include <limits.h>
using namespace std;
bool findpair(int arr[],int n,int k){
   int start = 0;
   int end = n-1;
   while(end>start){
       if(arr[start]+arr[end]==k){
           cout<<start<<" "<<end;
           return true;
       } else if(arr[start]+arr[end]>k){
           end--;
       } else {
           start++;
       }
   }
    return false;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    findpair(arr,n,k);
}

// on^2
#include <iostream>
#include <limits.h>
using namespace std;
bool findpair(int arr[],int n,int k){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==k){
                cout<<i<<" "<<j<<endl;
                return true;
            }
        }
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    cout<<findpair(arr,n,k);
}
