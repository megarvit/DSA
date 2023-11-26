#include <bits/stdc++.h> 
class NStack
{
    int* arr;
    int* top;
    int* next;

    int n,s;
    int freeSpot;

public:
    // Initialize your data structure.
    NStack(int N, int S)
    {
        n = N;
        s = S;
        arr = new int[s];
        top = new int[n];
        next = new int[s];

        //top initialise we can use memset()
        for(int i=0;i<n;i++){
            top[i] = -1;
        }
        // memset(top,-1,n);

        //next initialise
        for(int i=0;i<s;i++){
            next[i] = i+1;
        }

        //update last index to -1
        next[s-1] = -1;

        //initialise freespot
        freeSpot=0;
    }

    // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the stack, and false otherwise.
    bool push(int x, int m)
    {
        // check for overFlow
        if(freeSpot == -1){
            return false;
        }

        //find index
        int index = freeSpot;

        //update freespot
        freeSpot = next[index];

        //insert element into array
        arr[index] = x;

        //update next;
        next[index] = top[m-1];

        //update top
        top[m-1] = index;

        return true;
    }

    // Pops top element from Mth Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
    int pop(int m)
    {
        // check underFlow
        if(top[m-1] == -1){
            return -1;
        }

        int index = top[m-1];

        top[m-1] = next[index];

        next[index] = freeSpot;

        freeSpot = index;

        return arr[index];
    }
};