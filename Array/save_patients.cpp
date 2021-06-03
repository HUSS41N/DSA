// https://www.hackerearth.com/practice/algorithms/sorting/bubble-sort/practice-problems/algorithm/save-patients/
#include <iostream>
using namespace std;
int bubble_sort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main(){
	int n;
	cin>>n;
	int vac[n];
	int mid[n];
	int t1 = 0;
	int t2 = 0;
	for(int i=0;i<n;i++){
		cin>>vac[i];
	}
    for (int j =0;j<n;j++){
        cin>>mid[j];
    }
    bubble_sort(mid,n);
	bubble_sort(vac,n);
    
   
    for(int i=0;i<n;i++){
      if(vac[i]>mid[i+1]==false){
          cout<<"No";
          return 0;
      }
    }
    cout<<"Yes";
}
