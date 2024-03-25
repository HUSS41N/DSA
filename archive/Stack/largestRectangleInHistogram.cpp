#include <iostream>
#include <stack>
using namespace std;

int main(){
    // input array
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // initialize stack stk
    stack<int> stk;
    int max_area = 0;
    int top_of_stack;
    int area_with_top;

    // i is an iterator
    int i=0;
    while(i<n){
        // if my stack is empty or the index value on the top of the stack actutals value is less the the arr[i]
        // push the i into the stack
        // i++  
        if(stk.empty() || arr[stk.top()] <= arr[i]){
            stk.push(i);
            i++;
        }
        // if it is not 
        // means we have found a potential area
         else {
            //  get the index value from the top of the stack
             top_of_stack = stk.top();
            //  before removing save it to temp varible(top_of_stack)
             stk.pop();
            //  calucluates area with the index value 
            // if stack is empty just multiply it with the current value of i
            // other wise do i-stk.top()- 1 (caluclates width)
             area_with_top = arr[top_of_stack] * (stk.empty() ? i : i-stk.top()-1);
         }
        //  compare the previous area with the newly calcluated area;
         max_area = max(max_area,area_with_top);
    }
    // if there are remaning element in our stack
    while(!stk.empty()){
        top_of_stack = stk.top();
        stk.pop();
        area_with_top = arr[top_of_stack] * (stk.empty() ? i : i-stk.top()-1);
        max_area = max(max_area,area_with_top);
    }
    cout<<max_area<<endl;
}
