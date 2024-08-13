//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution {
  public:
     long long int floorSqrt(long long int n) {
    if (n == 0 || n == 1) {
        return n;
    }

    long long start = 1, end = n, ans = 0;
    while (start <= end) {
        long long mid = (start + end) / 2;

        // Check if mid*mid is equal to n
        if (mid * mid == n) {
            return mid;
        }

        // If mid*mid is less than n, discard the left half
        if (mid * mid < n) {
            start = mid + 1;
            ans = mid;  // Store the floor value of sqrt(n)
        }
        // If mid*mid is greater than n, discard the right half
        else {
            end = mid - 1;
        }
    }
    return ans;
}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        Solution obj;
        cout << obj.floorSqrt(n) << endl;
    }
    return 0;
}

// } Driver Code Ends