// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:

    long long findMinDiff(vector<long long> arr, long long n, long long m){

    if(m>n)
    return -1;
    sort(arr.begin(), arr.end()); // this how to use sort function in vector arr
    long long minDiff= arr[m-1]-arr[0];
    for(int i = 1 ; (i+m-1)< n;i++){ // this approch known as silding window
        minDiff = min(arr[m-1+i]-arr[i],minDiff);
    }
    return minDiff;
    }   
};

// { Driver Code Starts.
int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		long long m;
		cin>>m;
		Solution ob;
		cout<<ob.findMinDiff(a,n,m)<<endl;
	}
	return 0;
}  // } Driver Code Ends