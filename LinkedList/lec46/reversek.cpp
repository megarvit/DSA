/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node* kReverse(Node* head, int k) {
    // Write your code here.
    int size = 0;
    Node* temp = head;

    while(temp!=NULL){
        temp = temp -> next;
        size++;
    }
    if(k > size)return head;

    //base case
    if(head == NULL) return head;


    //step 1 reverse first k nodes
    Node* curr = head;
    Node* prev = NULL;
    Node* next = NULL;

    int count = 0;
    while(curr != NULL && count < k){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    //step 2 recursion will handle aage ka
    if(next != NULL){
        head->next = kReverse(next,k);
    }

    //step 3 return head of reversed list
    return prev;
}