// { Driver Code Starts
#include <iostream>
using namespace std;
class Solution{
    public:
        long long trappingWater(int arr[], int n){
        int left[n];
        int right[n];
        left[0] = arr[0];
        right[n-1] = arr[n-1];
        int maxLeft= arr[0];
        int maxRight = arr[n-1];

        for(int i =1 ; i<n ;i++){
            maxLeft = max(arr[i],maxLeft);
            left[i] = max(arr[i],maxLeft);
        }
        for(int i = n-1 ; i>=0 ; i--){
            maxRight = max(arr[i],maxRight);
            right[i] = max(arr[i],maxRight);
        }
        long long atm =0 ;
        for(int i=0 ;i<n;i++){
            atm += min(left[i],right[i])-arr[i];
        }
        return atm;
    }
};

// { Driver Code Starts.

int main(){

        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;

    return 0;
}  // } Driver Code Ends