#include <iostream>
using namespace std;
int minJumps(int arr[], int n)
{
    int i = 0;
    int k = 0;
    while(i< n){
        k++;
        int temp = arr[i];
        int j = temp +i;
        int indx;
        while( j<n && j != i){
            if(arr[j]>temp){
                 indx = j;
            }
            j--;
        }
        i = indx;
        
        if (arr[i] == 0)
            break;
    }
    if (i < n - 1)
        return -1;

    return k;
}
int main()
{
    int arr[] = {1, 3, 6, 1, 0, 9};
    int size = sizeof(arr) / sizeof(int);
    cout << "Minimum number of jumps to reach end is "
         << minJumps(arr, size);
    return 0;
}