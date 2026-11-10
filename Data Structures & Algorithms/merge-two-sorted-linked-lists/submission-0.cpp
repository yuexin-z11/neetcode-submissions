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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummyHead = new ListNode();
        ListNode* dummyNode = dummyHead;

        // if (list1->next == nullptr)
        // {
        //     return list2;
        // }
        // if (list2->next == nullptr)
        // {
        //     return list1;
        // }

        while((list1 != nullptr) && (list2 != nullptr))
        {
            // compare
            if (list1->val > list2->val)
            {
                dummyNode->next = list2;
                list2 = list2->next;
            }
            else if (list1->val < list2->val)
            {
                dummyNode->next = list1;
                list1 = list1->next;
            }
            else
            {
                dummyNode->next = list2;
                list2 = list2->next;
            }

            dummyNode = dummyNode->next;
        }

        if (list2 != nullptr)
        {
            dummyNode->next = list2;
        }
        if (list1 != nullptr)
        {
            dummyNode->next = list1;
        }

        return dummyHead->next;
    }
};
