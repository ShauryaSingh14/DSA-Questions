#include <iostream>
using namespace std;
void merge(int arr1[], int arr2[], int n, int m)
{
    int ptr1 = 0;
    int ptr2 = 0;
    int k = 0;
    int temp[n + m];
    while (ptr1 < n && ptr2 < m)
    {

        if (arr1[ptr1] < arr2[ptr2])
        {
            temp[k] = arr1[ptr1];
            ptr1++;
        }
        else
        {
            temp[k] = arr2[ptr2];
            ptr2++;
        }
        k++;
    }
    while (ptr1 < n)
    {
        temp[k] = arr1[ptr1];
        ptr1++;
        k++;
    }
    while (ptr2 < m)
    {
        temp[k] = arr2[ptr2];
        ptr2++;
        k++;
    }

    for (int i = 0; i < n + m; i++)
    {
        if (i < n)
        {
            arr1[i] = temp[i];
        }
        else
        {
            arr2[i - n] = temp[i];
        }
    }
}
void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << endl;
}
int main()
{
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {0, 2, 6, 8, 9};
    merge(arr1, arr2, 4, 5);
    print(arr1, 4);
    print(arr2, 5);
    return 0;
}