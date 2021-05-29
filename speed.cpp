// https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/speed-7/
#include <iostream>
using namespace std;

int main(){
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		int max = arr[0];
		int counter = 1;
		for(int i=1;i<n;i++){
			if(arr[i]<max){
				counter++;
				max = arr[i];
			}
		}
		cout<<counter<<endl;
	}
}
