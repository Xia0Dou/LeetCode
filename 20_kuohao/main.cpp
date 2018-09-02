#include <iostream>
#include <stack>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> val;
        char pop;
        for(int i=0;i<s.size();++i){
            if(s[i]==' ')
                ++i;
            if(s[i]=='('||s[i]=='['||s[i]=='{')
                val.push(s[i]);
            else if(s[i]==')'){
                if(val.empty())
                    return false;
                if(val.top()=='(')
                    val.pop();
                else
                    return false;
            }
            else if(s[i]==']'){
                if(val.empty())
                    return false;
                if(val.top()=='[')
                    val.pop();
                else
                    return false;
            }
            else if(s[i]=='}'){
                if(val.empty())
                    return false;
                if(val.top()=='{')
                    val.pop();
                else
                    return false;
            }
        }
        if(!val.empty())
            return false;
        return true;
    }
};


int main() {
    Solution p;
    cout<<p.isValid("(( []))");
    std::cout << "Hello, World!" << std::endl;
    return 0;
}