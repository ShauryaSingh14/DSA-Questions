// { Driver Code Starts
#include <iostream>
using namespace std;


 // } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        int max=arr[0]>arr[1]? arr[0]: arr[1];
        int max2=arr[0]>arr[2]? arr[1]: arr[0];
        
        for(int i=0;i<n;i++){
            int temp = max;
            max=max>arr[i]? max: arr[i];
            max2=max>temp? temp:max;
        }
        long long atm=0;
        for(int i=0;i<n;i++){
            int temp = max2-arr[i];
            if(temp <0){
                temp=0;
            }
            atm=+temp;
        }
        return atm;
    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
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
        
    }
    
    return 0;
}  // } Driver Code Ends