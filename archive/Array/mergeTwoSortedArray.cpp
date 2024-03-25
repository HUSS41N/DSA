#include <iostream>
using namespace std;

void merge(int s1[],int s2[],int res[],int n,int m){
    int i,j,k;
    i=0,j=0,k=0;
    while(i<n && j<m){
        if(s1[i]<s2[j]){
            res[k++] = s1[i++];
        } else {
            res[k++] = s2[j++];
        }
    }
    while(i<n){
        res[k++] = s1[i++];

    }
    while(j<m){
        res[k++] = s2[j++];
    }
}
int main(){
    int n,m;
    n=m=5;
    int s1[n] = {1,3,5,7,9};
    int s2[m] = {2,4,6,8,10};
    int res[n+m];
    merge(s1,s2,res,n,m);
    for(int i=0;i<10;i++){
        cout<<res[i]<<" ";
    }
}
