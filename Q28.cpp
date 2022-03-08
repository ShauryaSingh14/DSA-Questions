// { Driver Code Starts
#include <iostream>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) ;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        int a1[n], a2[m];

        for (int i = 0; i < n; i++) {
            cin >> a1[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> a2[i];
        }

        cout << isSubset(a1, a2, n, m) << endl;
    }
    return 0;
}
// } Driver Code Ends


string isSubset(int a1[], int a2[], int n, int m) {
int a=INT_MIN;
    for(int i=0;i<n;i++){
        if(a<a1[i]) a=a1[i];
    }
    int a3[a+1];
    for(int i =0 ; i< a+1 ;i++){
        a3[i]=0;
    }
    for(int i=0;i<n;i++){
        a3[a1[i]]++;
    }
    for(int i=0;i<m;i++){
        if(a3[a2[i]]!=1) return "No";
    }
    return "Yes";
}