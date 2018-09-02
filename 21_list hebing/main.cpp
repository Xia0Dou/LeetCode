#include <iostream>

using namespace std;


//Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL)
            return l2;
        if(l2==NULL)
            return l1;

        ListNode * node1 = l1;
        ListNode * node2 = l2;
        ListNode * newNode = NULL;

        if(node1->val<node2->val){
            newNode = node1;
            newNode->next = mergeTwoLists(node1->next,node2);
        }
        else{
            newNode = node2;
            newNode->next = mergeTwoLists(node1,node2->next);
        }

        return newNode;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}