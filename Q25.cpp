// { Driver Code Starts
#include <iostream>
#include <map>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // arr[] : the input array
    // N : size of the array arr[]

    // Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {

        map<int, bool> values;
        int maxVal = arr[0];

        for (int i = 0; i < N; i++)
        {
            values[arr[i]] = true;
            maxVal = max(maxVal, arr[i]);
        }
        int count = 0;
        int maxCount = 0;
        for (int i = 0; i < maxVal; i++)
        {

            if (values[i] == true)
                count++;
            else
                count = 0;
            maxCount = max(maxCount, count);
        }
        return maxCount;
    }
};

// { Driver Code Starts.

// Driver program
int main()
{
    int t, n, i, a[100001];
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (i = 0; i < n; i++)
            cin >> a[i];
        Solution obj;
        cout << obj.findLongestConseqSubseq(a, n) << endl;
    }

    return 0;
} // } Driver Code Ends