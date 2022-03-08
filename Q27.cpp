#include <iostream>
using namespace std;
int maxProfit(int price[], int n){
   int profit = 0;
    for (int i = 1; i < n; i++)
    {
        int sub = price[i] - price[i - 1];
        if (sub > 0)
            profit += sub;
    }
    return profit;
}
int main()
{
    int price[] = { 2, 30, 15, 10, 8, 25, 80 };
    int n = sizeof(price) / sizeof(price[0]);
    cout << "Maximum Profit = " << maxProfit(price, n);
    return 0;
}