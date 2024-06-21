//{ Driver Code Starts

#include <iostream>
#include <regex>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  
    pair<string,string> splitString(string s,char delimiter)
    {
        pair<string,string> result;
    
        size_t pos = s.find(delimiter);
        
        if (pos != string::npos)
        {
            result.first = s.substr(0, pos);        
            result.second = s.substr(pos + 1);   
        }
        
        return result;
    }
    
    string compareFrac(string str) 
    {
        pair<string,string> splitaftercomma;
        pair<string,string> splitafterbacks1;
        pair<string,string> splitafterbacks2;
        
        splitaftercomma = splitString(str,',');
        splitafterbacks1 = splitString(splitaftercomma.first,'/');
        splitafterbacks2 = splitString(splitaftercomma.second,'/');
        
        
        if( ((double) stoi(splitafterbacks1.first) / (double) stoi ( splitafterbacks1.second )) == ( (double) stoi(splitafterbacks2.first) / (double) stoi(splitafterbacks2.second)) )
        return "equal";
        else if ( ((double)stoi(splitafterbacks1.first)/(double)stoi(splitafterbacks1.second)) > ((double)stoi(splitafterbacks2.first)/(double)stoi(splitafterbacks2.second)))
        return splitaftercomma.first;
        else 
        return splitaftercomma.second.substr(1); // i just thought there is one leading blank space in this situation 
        
            
    }
};


//{ Driver Code Starts.

int main() {
    Solution ob;
    int t;
    cin >> t;
    cin.ignore();
    for (int i = 0; i < t; i++) {

        string str;
        getline(cin, str);

        cout << ob.compareFrac(str) << endl;
    }
    return 0;
}

// } Driver Code Ends