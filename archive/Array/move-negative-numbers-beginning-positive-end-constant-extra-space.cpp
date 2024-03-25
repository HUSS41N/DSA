#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = { -1, 2, -3, 4, 5, 6, -7, 8, 9 };
    int j = 0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]<0){
            swap(nums[i],nums[j]);
            j++;
        }
    }
    for(auto num: nums){
        cout<<num<<" "; 
        }
}
