//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void sort012(vector<int>& arr) {
       int n = arr.size();
       int s=0,m=0,e=n-1;
       while(m<=e) {
           if(arr[m]==0) {
               swap(arr[s],arr[m]);
               s++,m++;
           }
           else if(arr[m]==1) m++;
           else {
               swap(arr[m],arr[e]);
               e--;
           }
       }
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        vector<int> a;
        string input;
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }
        Solution ob;
        ob.sort012(a);

        int n = a.size();
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }

        cout << endl;
    }
    return 0;
}

// } Driver Code Ends