#include <iostream>
#include <vector>

using namespace std;

// Definition for singly-linked list.
 struct ListNode {
         int val;
         ListNode *next;
         ListNode(int x) : val(x), next(NULL) {}
     };

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head==NULL)
            return false;
        vector<int> vec;
        while(head){
            vec.push_back(head->val);
            head = head->next;
        }
        int len = vec.size()-1;
        for(int i=0;i<vec.size()/2;++i){
            if(vec.at(i)!=vec.at(len--))
                return false;
        }
        return true;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}