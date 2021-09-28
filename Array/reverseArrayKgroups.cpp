#include <bits/stdc++.h>
using namespace std;


void reverseinKgroups(int n,int arr[],int k){
      for(int i=0;i<n;i+=k){
        int start=i;
        int end=min(i+k-1,n-1);

        while(start<end){
            swap(arr[start++],arr[end--]);
        }
    }
}

int main(){
    int n = 5;
    int arr[n] = {1,2,3,4,5};
    int k = 3;
    reverseinKgroups(n,arr,k);
    for(auto num: arr){
        cout<<num<<" ";
    }
}
