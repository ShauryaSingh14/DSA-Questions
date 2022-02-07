/*
An array contains both positive and negative numbers in random order. 
Rearrange the array elements so that all negative numbers appear before all 
positive numbers.
*/

#include <iostream>
using namespace std;

void rearrange(int arr[], int n){
    int low =0;
    int high =n-1;
    while(low<=high){
        if(arr[low]<0)
        low++;
        else{
            swap(arr[low],arr[high]);
            high--;
        }
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
}
int main()
{
    int arr[] = { -1, 2, -3, 4, 5, 6, -7, 8, 9 };
    int n = sizeof(arr) / sizeof(arr[0]);
    rearrange(arr, n);
    printArray(arr, n);
    return 0;
}