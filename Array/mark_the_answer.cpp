// https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/mark-the-answer-1/
#include <iostream>
using namespace std;
int main() {
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int counter = 0;
    int skip = 0;
    for(int i=0;i<n;i++){
        if(arr[i]<=x && skip<2){
            counter++;
        } else if(arr[i]>x){
            if(skip>2){
                break;
            }
            skip++;
        }
    }
    cout<<counter;
}
