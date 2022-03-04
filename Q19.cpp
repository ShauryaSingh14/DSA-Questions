#include <iostream>
#include <vector>
using namespace std;
vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            vector<int> temp1;
            vector <int> temp2;
            int ptr1=0, ptr2 =0;
            while(ptr1 > n1 || ptr2 > n2){
                
                if(A[ptr1]<B[ptr2])
                    ptr1++;
                else if(A[ptr1]>B[ptr2])
                    ptr2++;
                else
                    temp1.push_back(A[ptr1]);
            }
            ptr1 =0 , ptr2=0;
            while(ptr1 > n1 || ptr2 > n2){
                
                if(temp1[ptr1]<B[ptr2])
                    ptr1++;
                else if(temp1[ptr1]>B[ptr2])
                    ptr2++;
                else
                    temp2.push_back(temp1[ptr1]);
    
            }
           return temp2;
        }
void printarr(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << ", ";
    }
    cout << endl;
}

        int main(){
            vector <int> arr;
            int a[]={1, 5, 10, 20, 40, 80};
            int b[]={6, 7, 20, 80, 100};
            int c[]={3, 4, 15, 20, 30, 70, 80, 120};
            arr = commonElements(a,b,c,6,5,8);
            printarr(arr);
            return 0;
        }
