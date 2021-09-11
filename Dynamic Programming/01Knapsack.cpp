// https://www.geeksforgeeks.org/0-1-knapsack-problem-dp-10/
#include <bits/stdc++.h>
using namespace std;


int knapsack(vector<int> weight,vector<int> value,int W,int n){
    if(n == 0 || W == 0){
        return 0;
    }
    if(weight[n-1] <= W){
        return max(value[n-1] + knapsack(weight,value,W - weight[n-1],n-1),knapsack(weight,value,W,n-1));
    }
    if(weight[n-1] > W){
        return knapsack(weight,value,W,n-1);
    }
    return -1;
}

int main(){
    vector<int> weight = {10,20,30};
    vector<int> value = {60,100,120};
    int n = weight.size();
    int W = 50; // total capacity
    cout<<knapsack(weight,value,W,n);

}
