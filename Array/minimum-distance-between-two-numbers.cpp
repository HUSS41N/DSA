#include <bits/stdc++.h>
using namespace std;



class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        int xf = -1;
        int yf = -1;
        int ans = INT_MAX;
        for(int i=0;i<n;i++){
            if(a[i]==x){
                xf = i;
            }
            if(a[i]==y){
                yf = i;
            }
            if(xf != -1 and yf != -1){
              ans = min(ans,abs(xf-yf));
            }
            
        }
        if(ans == INT_MAX){
            return -1;
        }
        return ans;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    }
    return 0;
}
