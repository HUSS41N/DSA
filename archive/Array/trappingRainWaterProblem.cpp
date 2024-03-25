#include <iostream>
#include <stack>
using namespace std;

int main()
{
    // input array
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // if there are no blocks(array elements) we can not store any water so return 0
    if(n==0 || n==1){
        return 0;
    }
    // approch 
    // 1.we will create 2 auxillary arrays left and right
    // 2.left will store the left most max height with respect to our current height(i in loop)
    // 3.similary right will store the right most max with respect to our ..
    // 4.loop again and subtract the height of block from the min of left or right and it will tell us how much water that block can store

    // step 1
    int left[n];
    left[0] = arr[0];
    // step 2
    for(int i=0;i<n;i++){
        left[i] = max(left[i-1],arr[i]);
    }
    // step 3
    int right[n];
    right[n-1] = arr[n-1];
    for(int i=n-2;i>=0;i--){
        right[i] = max(right[i+1],arr[i]);
    }
    int water = 0;
    // step 4
    for(int i=0;i<n;i++){
        water += min(left[i],right[i]) - arr[i];
    }
    cout<<water;
}
