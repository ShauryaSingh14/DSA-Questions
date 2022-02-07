#include <iostream>
#include <queue>
using namespace std;
// below given code has O(N) Time this could also implement by
// quickSelect in O( N Log N) 

int kthSmallest(int arr[], int l, int r, int k){
    priority_queue<int> pq;
    for(int i =0; i<=r;i++){
        pq.push(arr[i]);
        if(pq.size()>k)
        pq.pop();
    }
    return pq.top();
}
int main()
{
    int arr[] = { 10, 4, 5, 8, 6, 11, 26 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    cout << "K-th smallest element is "
        << kthSmallest(arr, 0, n - 1, k);
    return 0;
}