#include <iostream>

using namespace std;

 //Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };

//class Solution {
//public:
//    ListNode* removeNthFromEnd(ListNode* head, int n) {
//        int count = n;
//        ListNode* newNode = head;
//        ListNode* newNode1 = head;
//
//        while(count){
//            newNode = newNode->next;
//        }
//        if(newNode==NULL)
//            return head->next;
//        while(newNode->next){
//            newNode = newNode->next;
//            newNode1 = newNode1->next;
//
//        }
//        ListNode *p = newNode1->next;
//        newNode1->next = p->next;
//        delete p;
//        return head;
//    }
//};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;

        ListNode *dummyhead = new ListNode(1);

        dummyhead->next = head;

        ListNode * newnode = head;

        while(newnode!=NULL){
            newnode = newnode->next;
            ++count;
        }
        if(count==1)
            return NULL;
        int i = count - n ;
        ListNode * node1 = dummyhead;
        while(i){
            node1 = node1->next;
            --i;
        }

        node1->next=node1->next->next;

        return dummyhead->next;
    }
};


int main() {
    //struct ListNode p;

//    Solution q;
//    q.removeNthFromEnd(p,1);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}