#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
         vector<vector<int>>temp;
    
        for(int i=0;i<intervals.size()-1;i++){
              if(intervals[i][0]<=intervals[i+1][0] && intervals[i+1][0]<=intervals[i][1]) 
              {
               intervals[i+1][0] = min(intervals[i][0],intervals[i+1][0]);
               intervals[i+1][1] = max(intervals[i][1],intervals[i+1][1]);
               intervals[i][0] = intervals[i][1]= -1 ;
              }    
        }
       
        for(int i=0;i<intervals.size();i++){
               if(intervals[i][0]==-1 && intervals[i][1]==-1)
                   continue;
               temp.push_back(intervals[i]);
        }
        return temp;
    
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