// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template in C++

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        int N = 1e6 + 2;
        int check[N];
        for(int i=0;i<N;i++){
            check[i] = 0;
        }
        for(int i=0;i<n;i++){
            check[a[i]]++;
        }
        for(int i=0;i<m;i++){
            check[b[i]]++;
        }
        int counter = 0;
        for(auto num: check){
            if(num != 0){
                counter++;
            }
        }
        return counter;
    }
};

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends
