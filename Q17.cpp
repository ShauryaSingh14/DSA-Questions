// { Driver Code Starts
#include <iostream>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int mergeAndCount(long long arr[],  long long p , long long mid, long long r){
        long long n1 = mid-p+1, n2 = r -mid;
        long long left[n1], right[n2];
        
        for(long long i =0 ; i<n1 ; i++)
            left[i] = arr[p+i];
        for(long long i =0; i<n2 ; i++)
             right[i] = arr[mid+i+1];
             
    long long int count=0;
    long long pt1=0, pt2=0, i=p;
    
    while(pt1 < n1 && pt2 < n2){
        if(left[pt1]<=right[pt2]){
         arr[i]=left[pt1];
         pt1++;
        }
        else{
            arr[i]=right[pt1];
            count += n1 -i;
            pt2++;
        }
        i++;
    }
    while(pt1<n1){
        arr[i]=left[pt1];
        i++;
        pt1++;
    }
    while(pt2<n2){
        arr[i]=right[pt2];
        i++;
        pt2++;
    }
     return count;
    }
    long long int CountIn(long long arr[],long long p ,long long r){
        long long int count = 0;
        if(p<r){
            long long mid = p + (r - p)/2;
            count += CountIn(arr,p,mid);
            count += CountIn(arr,mid+1,r);
            count += mergeAndCount(arr,p, mid ,r);
        }
        return count;
    }
    long long int inversionCount(long long arr[], long long N)
    {
        long long int count = CountIn(arr,0,N);
        return count;
    }

};

// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
  // } Driver Code Ends