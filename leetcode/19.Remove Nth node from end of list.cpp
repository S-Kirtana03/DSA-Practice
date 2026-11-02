/*PROBLEM:19.Remove Nth node from end of list
LINK:https://leetcode.com/problems/remove-nth-node-from-end-of-list/
DIFFICULTY:Medium

PROBLEM DESCRIPTION:
Given the head of a linked list, remove the nth node from the end of the list and return its head.

APPROACH:
Traverse through the linkedlist and calculate the length of the linkedlist.
If length is equal to input n then,let the new head store the address of the next node.
Using for loop move till the required node len-n-1.
Create a new node for deletion and move the connection to the next node.

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len=0;
        ListNode *temp=head;
        while(temp!=nullptr)
        {
            len++;
            temp=temp->next;
        }
        if(len==n)
        {
            ListNode * newHead=head->next;
            delete head;
            return newHead;
        }
        ListNode *current=head;
        for(int i=0;i<len-n-1;i++)
        {
            current=current->next;
        }
        ListNode *toDelete=current->next;
        current->next=current->next->next;
        delete toDelete;
        return head;
    }
};

