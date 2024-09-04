//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
	public:
		int nthStair(int n){
		    //  Code here
		    int ans = 0;
		    int one = n;
		    int two = 0;
		    int su = n;
		    while(su == n && one>=0 && two<=n/2){
		        su = one*1 + two*2;
		        one-=2;
		        two++;
		        ans++;
		    }
		    return ans;
		}
};


//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans  = ob.nthStair(n);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends