//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  private:
    bool isPalindrom(string & str){
        int i=0,j=str.size()-1;
        while(i<=j){
            if(str[i] != str[j])
                return false;
            i++,j--;
        }
        return true;
    }
  public:
    string pattern(vector<vector<int>> &arr) {
        int n = arr.size();
        
        
        for(int i=0; i<n; i++){
            string str = "";
            for(int j=0; j<n; j++){
                str += (char)(arr[i][j]+'0');
            }
            if(isPalindrom(str)){
                return to_string(i)+" R";
            }
        }
        
        for(int i=0; i<n; i++){
            string str = "";
            for(int j=0; j<n; j++){
                str += (char)(arr[j][i]+'0');
            }
            if(isPalindrom(str)){
                return to_string(i)+" C";
            }
        }
        
        return "-1";
    }
};


//{ Driver Code Starts.

int main() {

    int t, n, i, j, flag, k;
    cin >> t;

    while (t--) {
        cin >> n;
        vector<vector<int>> a(n, vector<int>(n));

        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++)
                cin >> a[i][j];
        }
        Solution ob;
        cout << ob.pattern(a) << endl;
    }
    return 0;
}
// } Driver Code Ends