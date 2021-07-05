#include <bits/stdc++.h>
using namespace std;

int main()
{
    // input array
    vector<int> arr = {5,4,3,1,23,5,6};
    int sum;
    cin>>sum;
    sort(arr.begin(),arr.end());
    for(auto i: arr){
        cout<<i<<" ";
    }
    cout<<endl;
    // step 1 make two pointers
    int start = 0;
    int end = arr.size() - 1;
    while(start<end){
        int check = arr[start] + arr[end];
        if(check == sum){
            cout<<"TRUE"<<endl;
            return 1;
        } else if(sum<check){
            end--;
        } else{
            start++;
        }
    }
    cout<<"NOT FOUND"<<endl;
}
