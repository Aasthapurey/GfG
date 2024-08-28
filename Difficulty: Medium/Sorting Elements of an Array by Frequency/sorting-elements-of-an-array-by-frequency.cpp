//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Complete this function
    // Function to sort the array according to frequency of elements.
    
    static bool compare(pair<int, int> a, pair<int, int> b){
        if(a.second == b.second){
            return a.first < b.first;
        }
        return a.second > b.second;
    }
    
    vector<int> sortByFreq(vector<int>& arr) {
        // Your code here
        vector<pair<int, int>> vp;
        unordered_map<int, int> m;
        for (int i = 0; i < arr.size(); i++){
            m[arr[i]]++;
        }
        for(const auto& pair : m){
            vp.push_back({pair.first, pair.second});
        }
        sort(vp.begin(), vp.end(), compare);
        
        vector<int> res;
        for(int i = 0; i < vp.size(); i++){
            for (int j = 0; j < vp[i].second; j++){
                res.push_back(vp[i].first);
            }
        }
        return res;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution obj;
        vector<int> v;
        v = obj.sortByFreq(arr);
        for (int i : v)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends