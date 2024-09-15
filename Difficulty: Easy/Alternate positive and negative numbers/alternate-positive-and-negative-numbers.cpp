//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

     void rearrange(vector<int> &arr) 
    {
        queue<int> pos,neg;
        int j = 0;
        for(auto &i : arr)
        {
            if(i < 0)
                neg.push(i);
            else
                pos.push(i);
        }
        for(auto &i : arr)
        {
            if(j%2 == 0)
            {
                if(pos.size())
                {
                    i = pos.front();
                    pos.pop();
                }
                else
                {
                    i = neg.front();
                    neg.pop();
                }
            }
            else
            {
                if(neg.size())
                {
                    i = neg.front();
                    neg.pop();
                }
                else
                {
                    i = pos.front();
                    pos.pop();
                }
            }
            j++;    
        }
        
        // code here
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
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        ob.rearrange(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends