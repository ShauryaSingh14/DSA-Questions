// { Driver Code Starts
 
#include <iostream>
using namespace std;
 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	int left =0; 
    int right = S.length()-1;
    while(left < right){
        if(S[left]!=S[right])
         return 0;
         left++;
         right--;
    }
    return 1;
	}

};

// { Driver Code Starts.

int main() 
{

   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";


    return 0;
}  // } Driver Code Ends