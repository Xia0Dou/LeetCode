#include <iostream>

using namespace std;

struct ListNode {
         int val;
         ListNode *next;
         ListNode(int x) : val(x), next(NULL) {}
     };

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *l =l1;
//        ListNode * sum = l->next;
//        ListNode *p = sum;
        if(l1==NULL)
            return l2;
        if(l2==NULL)
            return l1;
        while(l1!=NULL&&l2!=NULL){

            l1->val = l1->val + l2->val;

            if(l1->next==NULL){
                l1->next = l2->next;
                break;
            }

            if(l2->next==NULL){
                //l1->next = l1->next;
                break;
            }


            if(l1->next!=NULL&&l2->next!=NULL){
                //l = l->next;
                l1 = l1->next;
                l2 = l2->next;
            }
        }

        ListNode *node = l;
        while(node->next){
            if(node->val>9){
                node->val %= 10;
                node->next->val += 1;
            }
            node = node->next;
        }
        if(node->val>9){
            node->val %= 10;
            ListNode *s = new ListNode(1);
            node->next = s;
        }
        return l;
    }
};

int main() {

    ListNode *s = new ListNode(8);
    ListNode *s1 = new ListNode(8);
    ListNode *l = new ListNode(8);
    ListNode *l1 = new ListNode(8);

    s->next = s1;
    l->next = l1;
    Solution p;
    p.addTwoNumbers(s,l);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}