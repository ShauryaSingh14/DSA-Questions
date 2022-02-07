#include <iostream>
using namespace std;
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
}
int getMinDiff(int arr[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] - k >= 0)
        {
            arr[i] = arr[i] - k;
        }
        else
            arr[i] = arr[i] + k;
    }
    sort(arr, arr + n);
   
    int minDiff = arr[n - 1] - arr[0];
    return minDiff;
}
int main()
{
    int arr[] = {2, 6, 3, 4, 7, 2, 10, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << getMinDiff(arr, n,5);
    return 0;
}