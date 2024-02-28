#include<iostream>
#include<queue>
using namespace std;

void interLeaveQueue(queue < int > & q) 
{
    queue<int> newQ;
    
    int n=q.size()/2;

    // Step-1: Fetch first half elements from input queue and push into a newQueue
    for(int i=0;i<n;i++)
    {
        int val=q.front();
        q.pop();
        newQ.push(val);
    }

    // Step-2: Push alternative elements in input queue itself
    while(!newQ.empty())
    {
        int val=newQ.front();
        newQ.pop();
        q.push(val);

        val=q.front();
        q.pop();
        q.push(val);
    }
}