#include <iostream>
#include <vector>
using namespace std;

    int maxProfit(vector<int>& arr) {
        int n = arr.size();
        int smallest = arr[0];
        int profit = 0;
        for(int i = 0 ; i< n ; i++){
            int diff;
            
            if(smallest>arr[i])
                smallest = arr[i];
            else
                diff = arr[i]-smallest;
            
            profit = max(diff, profit);
        }
        return profit;
    }

    int main(){
        return 0;

    }