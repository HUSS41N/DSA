#include <iostream>
using namespace std;

int partition(int arr[],int low,int high){
    int pivot = arr[low];
    int i = low+1;
    int j = high;
    do
    {
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    } while (i<j);
    int temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    
    return j;
}
int quickSort(int arr[],int low,int high){
    int partitionIndex;
    if(low<high){
        partitionIndex = partition(arr,low,high);
        quickSort(arr,low,partitionIndex-1);
        quickSort(arr,partitionIndex+1,high);
    }
}
int main(){
      int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
