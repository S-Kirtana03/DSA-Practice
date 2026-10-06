#Problem:Rotate a Linked List
#Link:https://www.geeksforgeeks.org/problems/rotate-a-linked-list/1
#Difficulty:Medium

You are given the head of a singly linked list, you have to left rotate the linked list k times. Return the head of the modified linked list.

/*
class Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* rotate(Node* head, int k) {
        // code here
       Node *temp=head;
       int l=1;
       while(temp->next)
       {
           temp=temp->next;
           l++;
       }
       k=k%l;
       if(k==0)
       {
           return head;
       }
       Node *kth=head;
       for(int i=1;i<k;i++)
       {
           kth=kth->next;
       }
       Node *head1=kth->next;
       kth->next=NULL;
       temp->next=head;
       
       return head1;
    }
};