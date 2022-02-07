#include <iostream>
using namespace std;

long long maxSubArraySum(int arr[], int n)
{
    int largestSum = INT_MIN;
    int currSum = 0;
    bool negVal = true;
    for (int i = 0; i < n; i++)
    {
        currSum = currSum + arr[i];
        if (currSum < 0)
            currSum = 0;
        else
        {
            largestSum = max(currSum, largestSum);
            negVal = false;
        }
    }
    if (negVal)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > largestSum)
                largestSum = arr[i];
        }
    }
    return largestSum;
}
int main()
{
    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(a) / sizeof(a[0]);
    int max_sum = maxSubArraySum(a, n);
    cout << "Maximum contiguous sum is " << max_sum;
    return 0;
}