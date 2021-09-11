// Given a sorted array containing only 0s and 1s, find the transition point. 

// https://practice.geeksforgeeks.org/problems/find-transition-point-1587115620/1/?problemType=functional&page=2&sortBy=submissions&query=problemTypefunctionalpage2sortBysubmissions#
// Example 1:

// Input:
// N = 5
// arr[] = {0,0,0,1,1}
// Output: 3
// Explanation: index 3 is the transition 
// point where 1 begins.

// Example 2:

// Input:
// N = 4
// arr[] = {0,0,0,0}
// Output: -1
// Explanation: Since, there is no "1",
// the answer is -1.

// Your Task:
// You don't need to read input or print anything. The task is to complete the function transitionPoint() that takes array and N as input parameters and returns the 0 based index of the position where "0" ends and "1" begins. If array does not have any 1s, return -1. If array does not have any 0s, return 0.
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int transitionPoint(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << transitionPoint(a, n) << endl;
    }
    return 0;
}// } Driver Code Ends


// o(n)

int transitionPoint(int arr[], int n) {
    // code here
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            return i;
        }
    }
    return -1;
}

// o(logn)
int transitionPoint(int arr[],int n){
    int start = 0;
    int end = n-1;
    if(arr[0] == 1){
        return 0;
    }
    while(start<=end){
        int mid = (start + end) / 2;
        if(arr[mid] == 1){
            if(mid == 0 || mid > 0 and arr[mid-1] == 0){
                 return mid;
            }
            end = mid -1 ;
        }
        else if(arr[mid]==0){
            start = mid + 1;
        } 
    }
    return -1;
}
