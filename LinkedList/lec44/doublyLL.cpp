#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    //destructor
    ~Node(){
        int val = this->data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"memory is free for node with data "<< val <<endl;

    }
};

//traversing a linked list
void print(Node* head){
    Node* temp = head;

    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}


//gives length of a ll
int getLength(Node* head){
    int len = 0;
    Node* temp = head;

    while(temp!= NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

//insert at head
void insertAtHead(Node* &tail ,Node* &head, int d){

    //empty list
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;

    }
    else{
        Node* temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;

    }
}

void insertAtTail(Node* &tail, Node* &head, int d){
    cout<<"tail "<<tail<<endl;

    //empty list
    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        head = temp;

    }
    else{
        Node* temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;

    }
}

void insertAtPosition(Node* &tail, Node* &head, int position, int d){

    //insert at start
    if(position ==1){
        insertAtHead(tail,head,d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }

    //inserting at last position
    if(temp -> next ==NULL){
        insertAtTail(tail,head,d);
        return;
    }

    //creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;

    temp->next->prev = nodeToInsert;

    temp -> next = nodeToInsert;

    nodeToInsert->prev = temp;
}

void deleteNode(int position, Node* &head){

    //deleting first or start node
    if(position == 1){
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;


    }
    else{ //middle or last node
        Node* curr = head;
        Node* prev = NULL; //in beginning

        int cnt = 1;
        while(cnt < position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        curr->prev = NULL;
        prev->next = curr->next;
        //curr->next->prev = prev;
        curr->next = NULL;
        delete curr;
        
    }
}
//1:35:38 here love bhaiya forgot to tell about we have to also change the curr -> next -> prev = prev  we have to change this as  well if we are deleting any middle node apart from this lecture is super duper Awesome. Love from Bottom Of My Heart.

//Clean lectures. Just wanted to point out one thing. At 55:00 instead of initializing temp->next = NULL or curr->next = NULL , just interchange the two lines in the deconstructor code and put them in order so, this->next is first initialized to NULL and then its deleted. Thank you!
//At 55:00 - 55:30 After adding these line temp->next = NULL;and curr -> next = NULL;I think we don't need destructor after this.


int main(){

    //Node* node1 = new Node(10);

    // Node* head = node1;
    // Node* tail = node1;

    Node* head = NULL;
    Node* tail = NULL;


    print(head);
    //cout<<getLength(head)<<endl;

    insertAtHead(tail,head, 11);
    print(head);

    cout<< "head "<<head->data<<endl;
    cout<< "tail "<<tail->data<<endl;

    insertAtHead(tail,head, 13);
    print(head);

    cout<< "head "<<head->data<<endl;
    cout<< "tail "<<tail->data<<endl;

    insertAtHead(tail,head, 8);
    print(head);

    cout<< "head "<<head->data<<endl;
    cout<< "tail "<<tail->data<<endl;

    insertAtTail(tail,head, 25);
    print(head);

    cout<< "head "<<head->data<<endl;
    cout<< "tail "<<tail->data<<endl;

    insertAtPosition(tail, head, 2, 100);
    print(head);

    cout<< "head "<<head->data<<endl;
    cout<< "tail "<<tail->data<<endl;

    insertAtPosition(tail, head, 1, 101);
    print(head);

    cout<< "head "<<head->data<<endl;
    cout<< "tail "<<tail->data<<endl;

    insertAtPosition(tail, head, 7, 102);
    print(head);

    cout<< "head "<<head->data<<endl;
    cout<< "tail "<<tail->data<<endl;

    // deleteNode(1,head);
    // print(head);

    // cout<< "head "<<head->data<<endl;
    // cout<< "tail "<<tail->data<<endl; 

    deleteNode(7,head);
    print(head);

    cout<< "head "<<head->data<<endl;
    cout<< "tail "<<tail->data<<endl; 




    return 0;
}