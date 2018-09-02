#include <iostream>

using namespace std;

//class Solution {
//public:
//    bool isPalindrome(string s) {
//        int k=0;
//        int i=0,j=s.length()-1;
//        while(i<=j){
//            if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z'||s[i]>='0'&&s[i]<='9'){
//                s[k++] = s[i];
//            }
//            ++i;
//        }
//        s[k] = '\0';
//        i = 0;
//        j = k-1;
//        while(i<j){
//            if(s[i]>='0'&&s[i]<='9'){
//                if(s[i]!=s[j])
//                    return false;
//            }
//            if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z'){
//                if(s[i]!=s[j]&&s[i]!=s[j]+32&&s[i]!=s[j]-32)
//                    return false;
//            }
//            ++i;
//            --j;
//        }
//        return true;
//    }
//};

class Solution {
public:
    bool isPalindrome(string s) {
        int i=0,j=s.length()-1;
        while(i<j){
            if(s[i]>='a'&&s[i]<='z'||s[i]>='0'&&s[i]<='9');
            else if(s[i]>='A'&&s[i]<='Z')
                s[i] += 32;
            else{
                ++i;
                continue;
            }

            if(s[j]>='a'&&s[j]<='z'||s[j]>='0'&&s[j]<='9');
            else if(s[j]>='A'&&s[j]<='Z')
                s[j] += 32;
            else{
                --j;
                continue;
            }
            if(s[i]!=s[j])
                return false;
            ++i;
            --j;
        }
        return true;
    }
};



int main() {

    Solution p;
    cout<<p.isPalindrome("race a car");

    //std::cout << "Hello, World!" << std::endl;
    return 0;
}