#include <iostream>
using namespace std;

class Solution {
	public:
		int LongestRepeatingSubsequence(string S){
		    int maxCount=1;
		  for(int i = 1 ; i < S.length();i++){
                int count = 0 ;
                while( i < S.length() && S[i] == S[i-1] ){
                    count ++; 
                }
                if(count > maxCount)
                    maxCount = count;
            }
            if(maxCount%2 != 0  )
            maxCount -- ;
            
            return maxCount;
            
		}

};
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
} 