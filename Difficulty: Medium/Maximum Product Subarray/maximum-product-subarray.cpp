//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    // Function to find maximum product subarray
    int maxProduct(vector<int> &arr) {
        int ans=arr[0];
        int first=arr[0],second=arr[0];
        for(int i=1;i<arr.size();i++){
            int first_value=0,second_value=0;
            first_value=arr[i]*1ll*first;
            second_value=arr[i]*1ll*second;
            int res=0,res1=0;
            if(max(first_value,second_value)<arr[i]){
                res1=arr[i];
            }
            else res1=max(first_value,second_value);
            if(min(first_value,second_value)>arr[i]){
                res=arr[i];
            }
            else res=min(first_value,second_value);
            first=res;
            second=res1;
            ans=max(ans,res);
            ans=max(ans,res1);
        }
        
        return ans;
        
        // Your Code Here
    }


};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        // int n, i;
        // cin >> n;
        // vector<int> arr(n);
        // for (i = 0; i < n; i++) {
        //     cin >> arr[i];
        // }

        vector<int> arr;
        string input;

        // Read array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        auto ans = ob.maxProduct(arr);
        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends