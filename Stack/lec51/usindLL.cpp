#include<iostream>
using namespace std;

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };



class Stack
{
    Node *head;
    int size=0;

public:
    Stack()
    {
        head = NULL;
        size = 0;
    }

    int getSize()
    {
        return size;
    }

    bool isEmpty()
    {
        if(size == 0){
            return true;
        }
        return false;
    }

    void push(int data)
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        size++;
    }

    void pop()
    {
        if(isEmpty()){
            return ;
        }
        Node *t = head;
        head = head->next;
        size--;
        delete t;
    }

    int getTop()
    {
        if(isEmpty()){
            return -1;
        }
        return head->data;
    }
};