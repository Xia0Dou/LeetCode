#include <iostream>

using namespace std;

struct ListNode {
         int val;
         ListNode *next;
         ListNode(int x) : val(x), next(NULL) {}
     };

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL)
            return NULL;
        if(head->next==NULL||head->next->next==NULL)
            return head;
        ListNode *p = head;
        ListNode *q = head->next;
        ListNode *help = q;
        ListNode *node = q->next;
        while(help->next!=NULL){

                help->next = node->next;
                node->next = q;
                p->next = node;

                p = p->next;
                if(help->next==NULL)
                    break;
                help = help->next;

                if(help->next==NULL)
                    break;
                node = help->next;

        }
        return head;
    }
};


int main() {
    ListNode *s1 = new ListNode(1);
    ListNode *s2 = new ListNode(2);
    ListNode *s3 = new ListNode(3);
    ListNode *s4 = new ListNode(4);

    ListNode *s5 = new ListNode(5);
    ListNode *s6 = new ListNode(6);

    s1->next = s2;
    s2->next = s3;
    s3->next = s4;
    s4->next = s5;
    s5->next = s6;
//    s6->next = NULL;

    Solution p;
    p.oddEvenList(s1);

    std::cout << "Hello, World!" << std::endl;
    return 0;
}