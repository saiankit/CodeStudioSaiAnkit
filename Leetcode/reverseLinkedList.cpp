/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        if( head == nullptr || head->next == nullptr) return head;

        ListNode* c = head;
        ListNode* p = nullptr;
        ListNode* f = nullptr;

        while(c!=nullptr) {
            f = c -> next; // Moving Forward pointer
            c -> next = p; // Changing the Link
            //Moving the p & c pointers
            p = c;
            c = f;
        }

        return p;
    }
};