#include <iostream>
#include <vector>

using namespace std;

struct ListNode {
         int val;
         ListNode *next;
         ListNode(int x) : val(x), next(NULL) {}
     };

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        if(headA==NULL||headB==NULL)
            return NULL;

        vector<ListNode *> vec;

        ListNode *node1 = headA;
        ListNode *node2 = headB;
        while(node1){
            vec.push_back(node1);
            node1 = node1->next;
        }
        while(node2){
            for(int i=0;i<vec.size();++i){
                if(node2==vec[i])
                    return node2;
            }
            node2 = node2->next;
        }
        return NULL;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}