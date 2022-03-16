#include <iostream>
using namespace std;
bool checkOrder(char s[],int n){
    int i =0;
    int j = n-1+i;
    while(i<j){
        swap(s[i],s[j]);
        i++;
        j--;
    }
    for(int i =1; i< n ;i++){
        if(s[i-1]>s[i])
        return false;
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n ;
        char s[n];
        for(int i =0 ; i< n ;i++)
            cin >> s[i];
        int x = checkOrder(s,n);
        if(x)
        cout << "YES";
        else
        cout << "NO";
    }
    return 0;
}
