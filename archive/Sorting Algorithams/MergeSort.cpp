#include <iostream>
using namespace std;

void merge(int arr[],int mid,int low,int high){
    int i,j,k;
    i = low;
    j = mid + 1;
    k = low;
    int res[high+1];
    while(i<=mid && j<=high){
        if(arr[i]<arr[j]){
            res[k++] = arr[i++];
        } else {
            res[k++] = arr[j++];
        }
    }
    while(i<=mid){
        res[k++] = arr[i++];
    }
    while(j<=high){
        res[k++] = arr[j++];
    }
    for(int i=low;i<=high;i++){
        arr[i] = res[i];
    }
}
void mergeSort(int arr[],int low,int high){
    int mid;
    if(low<high){
        mid= (low+high)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,mid,low,high);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
