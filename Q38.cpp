// { Driver Code Starts
#include <iostream>
#include <vector>
using namespace std; 

 // } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
    int startRow = 0;
    int endRow = r - 1;
    int startCol = 0;
    int endCol = c - 1;

    while (startRow <= endRow)
    {

        for (int i = startCol; i <= endCol; i++)
        {
            cout << matrix[startRow][i] << ", ";
        }

        for (int i = startRow + 1; i <= endRow; i++)
        {
            cout << matrix[i][endCol] << ", ";
        }

        for (int i = endCol - 1; i >= startCol; i--)
        {
            if (startRow == endRow)
                break;

            cout << matrix[endRow][i] << ", ";
        }
        for (int i = endRow - 1; i >= startRow + 1; i--)
        {
            if (startCol == endCol)
                break;
            cout << matrix[i][startCol] << ", ";
        }
        startCol++;
        startRow++;
        endRow--;
        endCol--;
    }
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends