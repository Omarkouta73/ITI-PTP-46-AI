
#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;



//  Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == nullptr){
            return list2;
        }
        if (list2 == nullptr){
            return list1;
        }

        ListNode* ptr;
        ListNode* dumm;

        if (list1->val < list2->val){
            ptr = list1;
            list1 = list1->next;
        }
        else {
            ptr = list2;
            list2 = list2->next;
        }

        dumm = ptr;

        while (list1 && list2){
            if (list1->val < list2->val){
                dumm->next = list1;
                list1 = list1->next;
            }
            else {
                dumm->next = list2;
                list2 = list2->next;
            }
            dumm = dumm->next;
        }
        
        while (list1){
            dumm->next = list1;
            list1 = list1->next;
            dumm = dumm->next;
        }
        while (list2){
            dumm->next = list2;
            list2 = list2->next;
            dumm = dumm->next;
        }

        return ptr;
        
    }
};

void printList(ListNode* head){
    ListNode* curr = head;
    while (curr != nullptr){
        cout << curr->val << ", ";
        curr = curr->next;
    }
    cout << endl;
}

int main() {
    ListNode* head1 = new ListNode(1);
    head1->next = new ListNode(2);
    head1->next->next = new ListNode(4);

    ListNode* head2 = new ListNode(1);
    head2->next = new ListNode(3);
    head2->next->next = new ListNode(4);

    Solution sol;
    ListNode* head = sol.mergeTwoLists(head1, head2);

    cout << "Original list: ";
    printList(head);

    
    
    return 0;
}