#include <iostream>
#include <vector>
using namespace std;
vector< vector<int> > merge(vector<vector<int> >& intervals) {
       vector< vector<int> > newVec;
       int j=0;

        for(int i=0;i<intervals.size();i++){
            if( i<intervals.size()-1 && intervals[i][1] >= intervals[i+1][0] ){
                int a = intervals[i][0];
                int b = intervals[i+1][1];
                cout << a << " -- " << b << endl;
                newVec[j].push_back(a);
                newVec[j].push_back(b);
                i++;
            }else{
                newVec.push_back(intervals[i]);
            }
             j++;
        }
        return newVec;
    }
int main(){
    int n;
    cin>>n;
    vector<vector<int> > intervals(n);
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        intervals[i].push_back(a);
        intervals[i].push_back(b);
    }
    vector<vector<int> > ans = merge(intervals);
    cout<<"Intervals after merge operation are:\n";
    for(int i=0;i<ans.size();i++){
        cout<<ans[i][0]<<" "<<ans[i][1]<<"\n";
    }
}