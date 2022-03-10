// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void Reverse(int arr[], int n){
    int left =0;
    int right = n-1;
    while(left < right){
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left ++;
        right --;
    }
}
void print(int arr[], int n ){
    for(int i =0; i< n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int arr [] = {1,3,4,5,6,7,8};
    int size = sizeof(arr)/sizeof(int);
    print(arr,size);
    Reverse(arr,size);
    print(arr,size);

    return 0;
}