//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    string removeDups(string str) {
        // Your code goes here
        if(str.length()==1)return str;
        
        vector<int>count(26,0);
        for(char ch:str){
            count[ch-'a']++;
            
        }
        string res="";
        for(char ch:str){
            if(count[ch-'a']!=0){
                res+=ch;
                count[ch-'a']=0;
            }
        }
        return res;
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
        cin >> s;

        Solution ob;
        cout << ob.removeDups(s) << "\n";
    }

    return 0;
}
// } Driver Code Ends