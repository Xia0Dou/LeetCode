#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <map>
#include <cmath>
#include <cstring>

using namespace std;

class Solution {            //波兰表达式
public:
    int evalRPN(vector<string>& tokens) {
        int size = tokens.size();
        if(size==1)
            return stoi(tokens[0]);
        if(size==0||size==2)
            return 0;
        for(int i=0;i<size;){
            if(tokens[i]=="+"){
                int num1 = stoi(tokens[i-1]);
                int num2 = stoi(tokens[i-2]);
                tokens[i-2] = to_string(num1+num2);
                for(int j=i-1;j<size-2;++j){
                    tokens[j] = tokens[j+2];
                }
                size -= 2;
                i -= 2;
            }
            else if(tokens[i]=="-"){
                int num1 = stoi(tokens[i-1]);
                int num2 = stoi(tokens[i-2]);
                tokens[i-2] = to_string(num2-num1);
                for(int j=i-1;j<size-2;++j){
                    tokens[j] = tokens[j+2];
                }
                size -= 2;
                i -= 2;
            }
            else if(tokens[i]=="*"){
                int num1 = stoi(tokens[i-1]);
                int num2 = stoi(tokens[i-2]);
                tokens[i-2] = to_string(num1*num2);
                for(int j=i-1;j<size-2;++j){
                    tokens[j] = tokens[j+2];
                }
                size -= 2;
                i -= 2;
            }
            else if(tokens[i]=="/"){
                int num1 = stoi(tokens[i-1]);
                int num2 = stoi(tokens[i-2]);
                tokens[i-2] = to_string(num2/num1);
                for(int j=i-1;j<size-2;++j){
                    tokens[j] = tokens[j+2];
                }
                size -= 2;
                i -= 2;
            }
            else
                ++i;
        }
        return stoi(tokens[0]);
    }
};

int main() {

    vector<string> vec{"1","2","+","3","*"};
    Solution p;

    cout<<p.evalRPN(vec);

    return 0;
}