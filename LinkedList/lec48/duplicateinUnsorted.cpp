//TLE 
#include <bits/stdc++.h> 
/****************************************************************
    Following is the class structure of the Node class:
    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };
*****************************************************************/

Node *removeDuplicates(Node *head)
{
    //empty list
    if(head == NULL) return head;

    //non empty list
    Node* curr = head;
    
    while(curr != NULL){
        Node* temp = curr;
        while(temp->next != NULL){
            if(curr->data == temp->next->data){
                Node* next_next = temp->next->next;
                Node* nodeToDelete = temp->next;
                delete(nodeToDelete);
                temp->next = next_next;
            }
            else{
                temp = temp->next;
            }
        }
        curr= curr->next;
    }
    return head;
}