#include <iostream>
using namespace std;
void merge(int arr1[], int arr2[], int n, int m)
{
    int ptr1 = 0;
    int ptr2 = 0;
    int i = 0, j = 0;
    while (j < m){
        if (i < n)
        {
            if (arr1[ptr1] < arr2[ptr2])
            {
                arr1[i] = arr1[ptr1];
                ptr1++;
            }
            else
            {
                arr1[i] = arr2[ptr2];
                ptr2++;
            }
            i++;
        }
        else
        {
            if (arr1[ptr1] < arr2[ptr2])
            {
                arr2[j] = arr1[ptr1];
                ptr1++;
            }
            else
            {
                arr2[j] = arr2[ptr2];
                ptr2++;
            }
            j++;
        }
    }
}
int main()
{
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {0, 2, 6, 8, 9};
    merge(arr1,arr2,4,5);
    return 0;
}