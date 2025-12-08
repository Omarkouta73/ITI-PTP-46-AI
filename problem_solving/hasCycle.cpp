
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
    bool hasCycle(ListNode* head) {
        unordered_map<ListNode*, int> m;
        while (head != nullptr){
            if (m[head] > 1){
                return true;
            }
            m[head]++;
            head = head->next;
        }
        return false;
        // for (const auto& pair : m) {
        //     std::cout << pair.first << " => " << pair.second << std::endl;
        // }
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
    head->next = new ListNode(2);
    head->next->next = new ListNode(0);
    head->next->next->next = new ListNode(-4);
    head->next->next->next->next = head->next;

    // cout << "Original list: ";
    // printList(head);

    Solution sol;
    cout << sol.hasCycle(head) << endl;

    // cout << "Reversed list: ";
    // printList(reversed);
    
    


    return 0;
}