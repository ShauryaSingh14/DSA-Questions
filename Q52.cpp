#include <iostream>
#include <string>
using namespace std;
bool checkRotute(string s1,string s2){
    if(s1.length()!= s2.length())
    return false;
    
    string temp = s1+s1;
    return(temp.find(s2)!= string::npos);
}
int main()
{
   string str1 = "AACD", str2 = "ACDA";
   if (checkRotute(str1, str2))
     printf("Strings are rotations of each other");
   else
      printf("Strings are not rotations of each other");
   return 0;
}