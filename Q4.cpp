#include <iostream>
using namespace std;
void swap(int * a, int *b){
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    void sort012(int arr[], int n)
    {
        int low =0, high=n-1, mid =0;
        while(mid<=high){
            if(arr[mid]==0){
                swap(&arr[low],&arr[mid]);
                mid ++;
                low++;
            }
            else if(arr[mid]==1){
                mid++;
            }
            else{
                swap(&arr[high],&arr[mid]);
                high--;
            }
        }
    }
int main(){
    int arr[]= {0, 2, 1, 2, 0};
    sort012(arr,5);
    return 0;
}