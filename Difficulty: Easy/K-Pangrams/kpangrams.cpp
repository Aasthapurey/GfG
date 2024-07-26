//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    bool kPangram(string str, int k) {
        // code here
        set<char> st;
        int n=0;
        for(int i=0;i<str.length();i++){
            if(str[i]>='a' && str[i]<='z')
             st.insert(str[i]);
            else{
                n++;
            }
        }
        if(st.size()==26) return true;
        
        if(str.length()-n<26) return false;
        
        if(k+st.size()>=26) return true;
        
        return false;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        string str;
        getline(cin, str);

        int k;
        cin >> k;

        Solution ob;
        bool a = ob.kPangram(str, k);
        if (a)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends