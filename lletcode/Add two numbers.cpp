#Problem:Add two numbers
#Link:https://leetcode.com/problems/add-two-numbers/
#Difficulty:Medium

You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *p=(struct ListNode *)malloc(sizeof(struct ListNode));
    p->next=NULL;
    struct ListNode *new1=p;
    int carry=0;
    while(l1!=NULL || l2!=NULL || carry!=0)
    {
        int sum=carry;
        if(l1){
            sum+=l1->val;
            l1=l1->next;
        }
        if(l2)
        {
            sum+=l2->val;
            l2=l2->next;
        }
        carry=sum/10;
        struct ListNode* p1=(struct ListNode *)malloc(sizeof(struct ListNode));
        p1->val=sum%10;
        p1->next=NULL;
        new1->next=p1;
        new1=p1;
       
    }
    return p->next;;
}
