#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/search-in-rotated-sorted-array/submissions/
int binarySearch(vector<int>& arr,int start,int end,int target){
        while(start<=end){
            int mid = (start+end) / 2;
            if(arr[mid] == target){
                return mid;
            } else if (arr[mid] > target){
                end = mid - 1;
            } else {
            start = mid + 1;
            }
        }
        return -1;
}
int main(){
    vector<int> arr = {4,5,6,7,0,1,2};
    int minIndex;
        int minValue = INT_MAX;
        for(int i=0;i<arr.size();i++){
            if(minValue > arr[i]){
                minValue = arr[i];
                minIndex = i;
            }
    }
    int firstHalf = binarySearch(arr,0,minIndex - 1,0);
        int n = arr.size() - 1;
    int secondHalf = binarySearch(arr,minIndex,n,0);
    if(firstHalf == -1 && secondHalf == -1){
        return -1;
    } if (firstHalf == -1){
        cout<<secondHalf<<" ";
        return secondHalf;
    } else {
        cout<<firstHalf<<" ";
        return firstHalf;
    }
}
