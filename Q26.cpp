#include <iostream>
#include <map>
using namespace std;

void morethanNbyK(int arr[], int n, int k)
{
    int x = n / k;
    map<int, int> freq;
    int maxEl = arr[0];
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }
    for (auto i : freq)
    {
        if (x < i.second)
            cout << i.first << " ";
    }
}
int main()
{
    int arr[] = {1, 1, 2, 2, 3, 5,
                 4, 2, 2, 3, 1, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;

    morethanNbyK(arr, n, k);

    return 0;
}
