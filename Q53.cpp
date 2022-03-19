// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;
bool checkShufle(string s,string s1, string s2){
    string temp = s1 + s2;
    if(s.length() != temp.length())
    return false;
    
    return true;
}
int main()
{
   string str1 = "XY", str2 = "12";
   string str ="X12Y";
   if (checkShufle(str,str1,str2))
     printf("valid shuffle");
   else
      printf("Not valid shuffle");
   return 0;
}