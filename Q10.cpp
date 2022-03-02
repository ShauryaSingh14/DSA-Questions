#include <iostream>
using namespace std;
int minJumps(int arr[], int n)
{
    int i = 0;
    int k = 0;
    while(i<n-1){
        k++;
        int jumps = i+1;

        for(int j = arr[i],indx=i+arr[i]; j>0 ; j--,indx--){
           
            if(arr[jumps] < arr[indx] && indx < n)
                jumps = indx;
            if(indx == n-1 )
            {
                jumps = indx;
                break;
            }
            
        }
        if (arr[i] == 0)
            break;
        i = jumps;
    }

    if (i < n - 1)
        return -1;

    return k;
}
int main()
{
    int arr[] = {2, 3 ,1 ,1, 2, 4 ,2 ,0, 1, 1} ;
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Minimum number of jumps to reach end is " << minJumps(arr, size);
    return 0;
}