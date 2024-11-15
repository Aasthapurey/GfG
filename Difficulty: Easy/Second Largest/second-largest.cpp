//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
public:
    int getSecondLargest(vector<int>& arr) {
        int maxi = INT_MIN; // To store the largest element
        int smaxi = INT_MIN; // To store the second largest element
        
        // Find the largest element in the array
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] > maxi) {
                maxi = arr[i];
            }
        }
        
        // Find the second largest element
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] > smaxi && arr[i] != maxi) {
                smaxi = arr[i];
            }
        }
        
        // If no valid second largest is found, return -1
        return (smaxi == INT_MIN) ? -1 : smaxi;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends