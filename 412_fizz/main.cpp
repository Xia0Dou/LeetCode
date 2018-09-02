#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> out;
        //string str;
        for(int i=1;i<=n;++i){
            if(i%3==0&&i%5==0)
                out.push_back("FizzBuzz");
            else if(i%3==0)
                out.push_back("Fizz");
            else if(i%5==0)
                out.push_back("Buzz");
            else{
//                stringstream stream;
//                stream<<i;
//                stream>>str;
                out.push_back(to_string(i));
            }

        }
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}