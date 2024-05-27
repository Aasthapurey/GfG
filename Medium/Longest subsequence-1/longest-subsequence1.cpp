//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
  int solve(int ind,int ind1,vector<int>&a,int n,vector<vector<int>>&dp)
  {
      if(ind1>=n)
      {
          return 0;
      }
      
      if(dp[ind+1][ind1]!=-1)
      {
          return dp[ind+1][ind1];
      }
      int nottake = solve(ind,ind1+1,a,n,dp);
      int take=0;
      if(ind==-1 || abs(a[ind]-a[ind1])==1)
      {
          take= 1+solve(ind1,ind1+1,a,n,dp);
      }
     return  dp[ind+1][ind1]=max(take,nottake);
  }
    int longestSubseq(int n, vector<int> &a) {
        // code here
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
     return    solve(-1,0,a,n,dp);
        
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        vector<int> a(n);
        Array::input(a, n);

        Solution obj;
        int res = obj.longestSubseq(n, a);

        cout << res << endl;
    }
}

// } Driver Code Ends