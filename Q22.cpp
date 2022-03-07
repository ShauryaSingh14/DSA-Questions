
#include <iostream>
#include <maps>
using namespace std;

class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int nums[], int n)
    {
        if(n==0)
            return 0;
        
        unordered_map<int,int> mymap;   //Key = PrefixSUM, Value = Count of PrefixSUM.
        int currSUM = 0;
        int i = 0;
        int count = 0;
        
        while(i<n)
        {
            currSUM += nums[i];
            
            if(currSUM == 0)    //We found a new subArray with SUM = k
                return true;
            
            if(mymap.find(currSUM)!=mymap.end())
                return true;
            
            mymap[currSUM] += 1;
            i += 1;
        }
        return false;
    }
};

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    Solution obj;
	    	if (obj.subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	}
	return 0;
} 