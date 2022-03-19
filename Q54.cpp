#include <iostream>
#include <unordered_map>
using namespace std;
// string countAndSay(int n) {
//     string temp;
//         unordered_map <int,int> val;
//         if(n==1 ){
//             temp ="1";
//              return temp ;
//         }
//         int i = n-1;
//         int j = 3;
//         while( i>0 && j >0 ){
//             if(i-j > 0){
//                 val[i]++;
//                 i-=j;
//             }
//             else
//                 j--;
//         }
//         for(auto i : val){
//              temp = temp + to_string(i.first) + to_string(i.second);
//         }
        
//         return temp;
//     }

string countAndSay(int n) {
    if(n ==1)
    return '1';

    return countAndSay(n-1);
    
    unordered_map <int, int> val;
    int i =0; 

    while(i<n)
        val[i]++;
    
    int temp ;
    for(auto i : val){
        temp = temp + i.first + i.second;
    }
    return temp;
}
int main()
{
    int N = 2;
    cout << countAndSay(N) << endl;
    return 0;
}