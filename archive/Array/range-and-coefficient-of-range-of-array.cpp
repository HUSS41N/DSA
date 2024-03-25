#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mx = INT_MIN;
    int mn = INT_MAX;
    for(int i=0;i<n;i++){
        mx = max(mx,arr[i]);
        mn = min(mn,arr[i]);
    }
    int range = mx - mn;
    float coefficient = (range)/(mx+mn);
    cout<<"Range is "<<range<<endl;
    cout<<"Coefficient id "<<coefficient<<endl;
}
