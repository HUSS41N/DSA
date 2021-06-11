#include <iostream>
using namespace std;

int firstOcc(int arr[],int n,int i,int target){
    if(i==n){
        return -1;
    }
    if(target==arr[i]){
        return i;
    }
    return firstOcc(arr,n,i+1,target);
}
int lastOcc(int arr[],int n,int i,int target){
    if(i==n){
        return -1;
    }
    int restArray = lastOcc(arr,n,i+1,target);
    if(restArray!=-1){
        return restArray;
    }
    if(target==arr[i]){
        return i;
    }
    return -1;
}
int main()
{   int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    cout<<firstOcc(arr,n,0,target);
    cout<<lastOcc(arr,n,0,target);
}





