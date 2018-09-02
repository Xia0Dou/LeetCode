#include <iostream>
#include <vector>
#include <set>

using namespace std;

//#define min(a,b) a<b?a:b

class MinStack {
public:
    /** initialize your data structure here. */
    vector<int> minvector;
    vector<int> minV;
    MinStack() {

    }

    void push(int x) {
        if(minV.empty())
            minV.push_back(x);
        else
            minV.push_back(min(x,minV.back()));

        minvector.push_back(x);
    }

    void pop() {
        minvector.pop_back();
        minV.pop_back();
    }

    int top() {
        return minvector.back();
    }

    int getMin() {
//        int min = minvector.at(0);
//        for(int i=1;i<minvector.size();++i){
//            if(minvector.at(i)<min)
//                min = minvector.at(i);
//        }
        return minV.back();
    }
};

int main() {
    MinStack *minStack = new MinStack();
    minStack->push(-2);
    minStack->push(0);
    minStack->push(-1);
    cout<<minStack->getMin()<<endl;   //--> 返回 -3.
    minStack->pop();
    cout<<minStack->top()<<endl;      //--> 返回 0.
    cout<<minStack->getMin()<<endl;
    //std::cout << "Hello, World!" << std::endl;
    return 0;
}