#include <bits/stdc++.h>
using namespace std;


void insert(vector<int> &nums,int temp){
//   if the array is empty we just insert the value 
    if(nums.size()==0 || nums[nums.size()-1] <= temp){
        nums.push_back(temp);
        return;
    }
    int last = nums[nums.size()-1];
    nums.pop_back();
    insert(nums,temp);
    nums.push_back(last);

}

void sort(vector<int> &nums){
    if(nums.size()==0){
        return;
    }
    int temp = nums[nums.size()-1];
    nums.pop_back();
    sort(nums);
    insert(nums,temp);
}

int main(){
    vector<int> nums = {5,4,3,2,1};
    for(auto num : nums){
        cout<<num<<" ";
    }
    sort(nums);
    cout<<endl;
    for(auto num : nums){
        cout<<num<<" ";
    }
}
