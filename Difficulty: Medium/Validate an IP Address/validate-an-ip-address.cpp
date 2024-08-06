//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/* The function returns 1 if
IP string is valid else return 0
You are required to complete this method */
class Solution {
  public:
    int isValid(string str) {
        // code here
          vector<string> v;
        v.push_back("");
        int index = 0;
        
        for (int i = 0; i < str.length(); i++) {
            if (str[i] == '.') {
                index++;
                v.push_back("");
            } else {
                v[index] += str[i];
            }
        }

        if (v.size() != 4) return false;
        
        for (int i = 0; i < v.size(); i++) {
            if (v[i].empty() || (v[i][0] == '0' && v[i].length() > 1)) return false;

            try {
                int num = stoi(v[i]);
                if (num < 0 || num > 255) return false;
            } catch (invalid_argument& e) {
                return false;
            } catch (out_of_range& e) {
                return false;
            }
        }
        
        return true;
    }
};

//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        // if (s.size() == 3) {
        //     cout << "false" << endl;
        //     return 0;
        // }
        Solution ob;
        bool f = ob.isValid(s);
        if (f)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends