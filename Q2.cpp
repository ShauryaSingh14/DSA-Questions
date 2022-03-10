// Online C++ compiler to run C++ program online
#include <iostream>
#include <limits>
#include <climits>
using namespace std;

pair<int,int> MinMaxEle(int arr[], int n){
    pair <int,int> MinMaxEl;
    MinMaxEl.first = INT_MAX;
    MinMaxEl.second = INT_MIN;
    for(int i =0 ; i< n ; i++){
        MinMaxEl.second = MinMaxEl.second<arr[i]? arr[i]:MinMaxEl.second;
        MinMaxEl.first =  MinMaxEl.first>arr[i]? arr[i]:MinMaxEl.first;
    }
    return MinMaxEl;
}
int main() {
    int arr [] = {1,3,4,5,6,7,8};
    int size = sizeof(arr)/sizeof(int);
    pair <int,int > MinMaxEl = MinMaxEle(arr,size);
    
    cout <<"Min element " <<MinMaxEl.first << endl;
    cout <<"Max element " << MinMaxEl.second << endl;

    return 0;
}