#include <iostream>
using namespace std;
int countWater(int n , int x , int w){
    int bottles=0;
    while(n > 0 && w >= x){
        w -=x;
        n--;
        bottles++;
    }
    return bottles;
}
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n , x , w;
        cin >> n >> x >> w;
        cout << countWater(n,x,w);
    }
    return 0;
}