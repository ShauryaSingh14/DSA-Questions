// { Driver Code Starts
// Initial Template for C++
#include <iostream>
#include <vector>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    vector<int> factorial(int N)
    {
        int temp = 1;
        int fac = 1;
        while (temp <= N)
        {
            fac = fac * temp;
            temp++;
        }
        vector<int> res;
        int rem = fac;
        while (fac > 0)
        {
            rem = fac % 10;
            res.push_back(rem);
            fac /= 10;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i)
        {
            cout << result[i];
        }
        cout << endl;
    }
    return 0;
} // } Driver Code Ends