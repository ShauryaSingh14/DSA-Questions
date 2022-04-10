#include <iostream>
#include <string>
using namespace std;

class Solution {
  public:
       string longestPalin (string S) {
        int maxCount = 0;
        int idx1=0 , idx2=0;
        if( S.length() % 2 == 0 ){
            for(int i = 0 ; i < S.length();i++){
                int left = i -1 ;
                int right = i +1 ;
                int count = 0 ;
                while(left > 0 && right < S.length() && S[left] == S[right] )
                     count ++;
                    
                if(count > maxCount){
                    idx1 = left+1;
                    idx2 = right-1;
                }
                cout << idx1;
            }
        }
        else{
            for(int i =0 ; i< S.length();i++){
                int left = i -1;
                int right = i;
                int count =0;
                while(left > 0 && right < S.length() && S[left] == S[right] )
                    count ++;
                    
                if(count > maxCount){
                    idx1 = left+1;
                    idx2 = right-1;
                }
            }
            
        }
        return S.substr(idx1,idx2);
        
    }
};

// { Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends