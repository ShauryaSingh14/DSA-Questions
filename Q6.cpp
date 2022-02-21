#include <iostream>
#include <vector>
using namespace std;
// Below Code can also implement using set as they contains only distict values 
int doUnion(int a[], int n, int b[], int m)
{

    sort(a, a + n);
    sort(b, b + m);

    vector<int> arr;
    int p = 0;
    int q = 0;
    int k = 0;

    while (p < n && q < m)
    {
        if (a[p] <= b[q])
        {
            arr.push_back(a[p]);
            p++;
            k++;
        }
        else
        {
            arr.push_back(b[q]);
            q++;
            k++;
        }
    }
    while (p < n)
    {
        arr.push_back(a[p]);
        p++;
    }

    while (q < m)
    {
        arr.push_back(b[q]);
        q++;
    }
    int res = arr.size();
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i - 1] == arr[i])
            res--;
    }
    return res;
}

int main()
{
    int a[9] = {1, 2, 5, 6, 2, 3, 5, 7, 3};
    int b[10] = {2, 4, 5, 6, 8, 9, 4, 6, 5, 4};

    cout << doUnion(a, 9, b, 10);
}