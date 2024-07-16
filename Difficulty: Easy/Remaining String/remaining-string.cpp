//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    string printString(string s, char ch, int count) {
        int n=s.length();
        int ct=0;
        int pos=0;
        for(int i=0;i<n;i++){
            if(ct==count)break;
            if(s[i]==ch){
                if(ct<count){
                ct++;
                pos=i;
                }
                
            }
        }
        if(ct<count){
            return "";
        }
        if(pos==n-1){
            return "";
        }
        return s.substr(pos+1,n-1-pos);
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string s;
        char ch;
        int count;

        cin >> s >> ch >> count;
        Solution ob;
        cout << ob.printString(s, ch, count) << "\n";
    }

    return 0;
}
// } Driver Code Ends