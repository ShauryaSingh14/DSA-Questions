#include <iostream>
#include <vector>
using namespace std;

void nextPermutation(vector<int> &arr)
{
    int count = 0;
    int n = arr.size();
    int ptr1 = 0;
    int ptr2 = n - 1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] > arr[i - 1])
        {
            ptr1 = i - 1;
            break;
        }
    }
    for (int i = ptr1 + 1; i < n; i++)
    {
        if (arr[ptr1] > arr[i])
        {
            ptr2 = i;
            break;
        }
    }
   
     for(int i = ptr1, j = ptr2 ; i < j ; i++ , j-- ){
       swap(arr[i],arr[j]);
     }
}
void printarr(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << ", ";
    }
    cout << endl;
}
int main()
{
    vector<int> vect;
 
    vect.push_back(1);
    vect.push_back(1);
    vect.push_back(5);

    nextPermutation(vect);

    printarr(vect);

    return 0;
}