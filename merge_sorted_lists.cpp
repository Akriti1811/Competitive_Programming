/*
Merge Two Sorted Lists
You are given the heads of two sorted linked lists list1 and list2.
Merge the two lists in a one sorted list. The list should be made by splicing together the nodes of the first two lists.
Return the head of the merged linked list.
Example 1:
Input: list1 = [1,2,4], list2 = [1,3,4]
Output: [1,1,2,3,4,4]
Example 2:
Input: list1 = [], list2 = []
Output: []
Example 3:
Input: list1 = [], list2 = [0]
Output: [0]
Constraints:
The number of nodes in both lists is in the range [0, 50].
-100 <= Node.val <= 100
Both list1 and list2 are sorted in non-decreasing order.
*/

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
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) 
    {
        if(a==NULL)
            return b;
        if(b==NULL)
            return a;
        ListNode *head=NULL,*tail=NULL;
        if(a->val<=b->val)
        {
            head=tail=a;
            a=a->next;
        }
        else
        {
            head=tail=b;
            b=b->next;
        }
        while(a!=NULL && b!=NULL)
        {
            if(a->val<=b->val)
            {
                tail->next=a;
                tail=a;
                a=a->next;
            }
            else
            {
                tail->next=b;
                tail=b;
                b=b->next;
            }
        }
        if(a==NULL)
            tail->next=b;
        else
            tail->next=a;
        return head;
    }
};