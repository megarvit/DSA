#include<iostream>
#include<map>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int d){
        this->data = d;
        this->next = NULL;
    }

    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"memory is free for node with data "<< value <<endl;
    }
};

void insertNode(Node* &tail, int element, int d){

    //empty list
    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else{
        //non khaali list
        //assuming element is present

        Node* curr = tail;

        while(curr->data != element){
            curr = curr->next;
        }

        //element milgaya
        //curr on that element node
        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;

    }

}

void print(Node* tail){ //doubtish

    Node* temp = tail;

    //empty list
    if(tail == NULL){
        cout<<"list is empty"<<endl;
        return ;  
    }
    
    do{
        cout<<tail->data<<" ";
        tail = tail->next;

    }while(tail != temp);

    cout<<endl;
}

void deleteNode(Node* &tail, int value){

    //empty list
    if(tail == NULL){
        cout<<"list is empty"<<endl;
    }
    else{
        //non empty
        //assuming that value is present in the ll

        Node* prev = tail;
        Node* curr = prev->next;

        while(curr->data != value){
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;

        // 1 node ll
        if(curr == prev){
            tail = NULL;
        }

        //>=2 node ll
        if(tail == curr){
            tail = prev;
        }
        curr->next = NULL;
        delete(curr);
    }
}

bool isCircularList(Node* head){

    //empty list
    if(head == NULL){
        return true;
    }

    Node* temp = head->next;
    while(temp != NULL && temp != head){
        temp = temp->next;
    }

    if(temp == head){
        return true;
    }

    return false;
}

bool detectLoop(Node* head){

    //empty list
    if(head == NULL){
        return false;
    }

    map<Node*,bool> visited;

    Node* temp = head;

    while(temp != NULL){
         
         //cycle is present
         if(visited[temp] == true) return 1;

         visited[temp] = true;
         temp = temp->next;
    }

    return 0;
}

Node* floydDetectLoop(Node* head){

    if(head == NULL) return NULL;

    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast != NULL){
        
        fast = fast->next;
        if(fast != NULL) fast = fast->next;

        slow = slow->next;

        if(slow == fast){
            cout<<"present at "<<slow->data<<endl;
            return slow;
        } 
    }
    return NULL;
}

Node* getStartedNode(Node* head){

    if(head == NULL) return NULL;

    Node* intersection = floydDetectLoop(head);
    Node* slow = head;

    while(slow != intersection){
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}

void removeLoop(Node* head){

    if(head == NULL) return;

    Node* startofLoop = getStartedNode(head);
    Node* temp = startofLoop;

    while( temp ->next != startofLoop){
        temp = temp->next;
    }
    temp->next = NULL;
}



int main(){

    Node* tail = NULL;

    //empty list
    // insertNode(tail,5,3);
    // print(tail);

    // insertNode(tail, 3, 5);
    // print(tail);

    // insertNode(tail, 5, 7);
    // print(tail);

    // insertNode(tail, 7, 9);
    // print(tail);

    // insertNode(tail, 5, 6);
    // print(tail);
 
    // insertNode(tail, 9, 10);
    // print(tail);

    // insertNode(tail, 3, 4);
    // print(tail);

    // deleteNode(tail,5);
    // print(tail);




    return 0;
}