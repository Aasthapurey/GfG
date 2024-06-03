//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  
    string binaryNextNumber(string s) {
   
   int i=s.size()-1;
    int carry =0;
    
    string result="";
    
    bool a=false;
    
    while(i>=0 ){
        int digit;
        
        if(a==false ){
            
           digit=(s[i]-'0'+1+carry)%2; 
           
            carry=(s[i]-'0'+1+carry)/2;
           a=true;
           
        }
        else{
              digit=(s[i]-'0'+carry)%2;
               carry=(s[i]-'0'+carry)/2;
        }
       
        result=to_string(digit)+result;
            i--;
        
    }
    
    
    
    while(carry){
        
        result=to_string(carry%2)+result;
        carry=carry/2;
    }
    
   int leadingzero = 0;
   
        while(leadingzero < result.size() && result[leadingzero] == '0'){
            
        
            leadingzero++;
        }


        if (leadingzero == result.size()){
            
            return result;
        }

    
        return result.substr(leadingzero);
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.binaryNextNumber(s);
        cout << "\n";
    }

    return 0;
}
// } Driver Code Ends