#include <bits/stdc++.h> 
/*************************************************
        Following is the structure of class Node:
     
        class Node{
        public:
            int data;
            Node* next;
            
            Node(int data){
                this->data = data;
                this->next = NULL;
            }
            
        }
**************************************************/

bool isCircular(Node* head){
    // Write your code here.
    // if(head == NULL) return true;

    // if(head -> next == NULL) return false; //overlap condn with >1 node

    // Node* temp = head->next;
    // while(temp != NULL && temp != head){
    //     temp = temp->next;
    // }
    // if(temp == NULL) return false;
    // if(temp == head) return true;

    if(head == NULL) return true;

    if(head->next == NULL) return false;

    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast != NULL){
        
        fast = fast->next;
        if(fast != NULL) fast = fast->next;

        slow = slow->next;

        if(slow == fast){
            if(slow == head) return true;
            else{
                return false;
            }
        }
    }
    return false;
}
