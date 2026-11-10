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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummyNode = head;
        int count = 0;
        // go through to find the size of the list 
        while (dummyNode != nullptr)
        {
            count++;
            dummyNode = dummyNode->next;
        }

        count = count - n; // true index
        if (count == 0)
        {
            return head->next;
        }
        int i = 0;

        ListNode* prev;
        ListNode* next;
        // ListNode* dummyHead = new ListNode();
        // dummyNode = dummyHead;
        dummyNode = head;

        while (dummyNode != nullptr)
        {
            if (i == count)
            {
                next = dummyNode->next;
                prev->next = next;
            }
            else
            {
                prev = dummyNode;
                dummyNode = dummyNode->next;
            }
            ++i;
        }
        return head;
    }
};
