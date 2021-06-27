#include <iostream>
using namespace std;

int getMinIndex(int arr[],int start,int end){
    int minIndex;
    int temp = INT_MAX;
    for(int i=start;i<end;i++){
        if(temp>arr[i]){
            temp = arr[i];
            minIndex = i;
        }
    }
    return minIndex;
}
void sort(int arr[],int start,int end){
    // return if my start index gets more than the end
    if(start>=end){
        return;
    }
    // get the index of the  min element in an array
    int minIndex = getMinIndex(arr,start,end);
    // swap the min element with the start of the array
    swap(arr[start],arr[minIndex]);
    // call the function again for the start+1 index
    sort(arr,start+1,end);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,0,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
