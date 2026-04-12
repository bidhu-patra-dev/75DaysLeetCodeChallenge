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
    void reorderList(ListNode* head) {
        if (!head || !head->next) return;

        ListNode *fast = head, *slow = head;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* second_half = reverse(slow->next);
        slow->next = nullptr;
        ListNode* first_half = head;
        while (second_half) {
            ListNode* nextf = first_half->next;
            ListNode* nexts = second_half->next;

            first_half->next = second_half;
            second_half->next = nextf;

            first_half = nextf;
            second_half = nexts;
        }
    }
    ListNode* reverse(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = nullptr;
        while (curr) {
            ListNode* next_ = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next_;
        }
        return prev;
    }
};