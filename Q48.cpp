    #include <iostream>
    #include <vector>
    using namespace std;

    void reverseString(vector<char>& s) {
        int left =0;
        int right = s.size();
        while(left < right){
            swap(s[left],s[right]);
            left ++;
            right--;
        }
    }
    int main(){
        return 0;
    }