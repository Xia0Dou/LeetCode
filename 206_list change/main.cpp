#include <iostream>

using namespace std;

 // Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };

//class Solution {
//public:
//    ListNode* reverseList(ListNode* head) {
//        ListNode * p = head;
//        ListNode * q = head->next;
//        ListNode * k = q->next;
//        p->next = NULL;
//        while(q){
//            q->next = p;
//            p = q;
//            q = k;
//            k = k->next;
//        }
//    }
//};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL||head->next==NULL)
            return head;
        ListNode * link = reverseList(head->next);
        head->next->next=head;
        head->next = NULL;
        return link;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}