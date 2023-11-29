#include <bits/stdc++.h> 
class CircularQueue {
    int* arr;    // Pointer to the array
    int front;   // Front index of the circular queue
    int rear;    // Rear index of the circular queue
    int size;    // Maximum size of the circular queue
public:
    // Initialize your data structure.
    CircularQueue(int n) {
        size = n;             // Set the maximum size
        arr = new int[size];  // Dynamic allocation of memory for the array
        front = rear = -1;     // Initialize front and rear to -1 (indicating an empty queue)
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value) {
        // Check for overflow (queue is full)
        if ((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1)))
            return false;  // Return false if overflow condition is met
        else if (front == -1) {
            // Checking for the first element
            front = rear = 0;
        } else if (rear == size - 1 && front != 0) {
            rear = 0;  // To maintain the cyclic nature of the circular queue
        } else {
            // Normal execution flow
            rear++;
        }
        arr[rear] = value;  // Add the value at the rear index
        return true;        // Return true indicating successful enqueue
    }

    // Dequeues the front element from the queue. Returns -1 if the queue is empty, otherwise returns the dequeued element.
    int dequeue() {
        if (front == -1)  // Check for underflow (empty queue condition)
            return -1;    // Return -1 if underflow condition is met

        int ans = arr[front];  // Store the front element in 'ans'
        arr[front] = -1;       // Set the front element to -1 (for visualization, actual removal)
        if (front == rear) {
            // Single-element case
            front = rear = -1;
        } else if (front == size - 1) {
            front = 0;  // To ensure the cyclic nature of the circular queue
        } else {
            // Normal execution flow
            front++;
        }
        return ans;  // Return the stored front element
    }
};