
#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <unordered_map>

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* newHead = new ListNode(0);
        ListNode* curr = newHead;
        while (l1 != nullptr && l2 != nullptr){
            int tmp = l1->val + l2->val;
            int u = tmp%10;
            tmp /= 10;
            int t = tmp%10;
            // cout << u << endl;

            curr->next = new ListNode(u);
            curr = curr->next;
            l1 = l1->next;
            l2 = l2->next;
            if (l1 == nullptr || l2 == nullptr){
                break;
            }
            l1->val += t;
        }
        while (l1 != nullptr){
            curr->next = new ListNode(l1->val);
            curr = curr->next;
            l1 = l1->next;
        }
        while (l2 != nullptr){
            curr->next = new ListNode(l2->val);
            curr = curr->next;
            l2 = l2->next;
        }

        return newHead->next;
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
    ListNode* head = new ListNode(2);
    head->next = new ListNode(4);
    head->next->next = new ListNode(3);

    ListNode* head2 = new ListNode(5);
    head2->next = new ListNode(6);
    head2->next->next = new ListNode(4);
    // head2->next->next->next = new ListNode(9);


    Solution sol;
    ListNode* newHead = sol.addTwoNumbers(head, head2);

    printList(newHead);
    
    // int x = 10;
    // int u = x%10;
    // x /= 10;
    // int t = x%10;
    // cout << u << endl;
    // cout << t << endl;
    


    return 0;
}