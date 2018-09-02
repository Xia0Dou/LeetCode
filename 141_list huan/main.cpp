#include <iostream>
#include <vector>

using namespace std;

 struct ListNode {
         int val;
         ListNode *next;
         ListNode(int x) : val(x), next(NULL) {}
     };

//class Solution {
//public:
//    bool hasCycle(ListNode *head) {
//        vector<ListNode *> node;
//        if(head==NULL||head->next==NULL)
//            return false;
//        ListNode * newNode = head;
//        while (newNode){
//            for(int i=0;i<node.size();++i){
//                if(newNode==node.at(i))
//                    return true;
//            }
//            node.push_back(newNode);
//            newNode = newNode->next;
//        }
//        return false;
//    }
//};


class Solution {
public:
    bool hasCycle(ListNode *head) {

        if(head==NULL||head->next==NULL)
            return false;
        ListNode * node1 = head;
        ListNode * node2 = head->next;
        while(node2&&node2->next!=NULL&&node1!=node2){
            node1 = node1->next;
            node2 = node2->next->next;
        }
        if(node1==node2)
            return true;
        return false;
    }
};

int main() {

    //std::cout << "Hello, World!" << std::endl;
    return 0;
}