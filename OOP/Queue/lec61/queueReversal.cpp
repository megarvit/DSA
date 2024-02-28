// class Solution
// {
//     public:
//     queue<int> rev(queue<int> q)
//     {
//         stack<int> s;
        
//         while(!q.empty()){
//             int element = q.front();
//             q.pop();
//             s.push(element);
//         }
        
//         while(!s.empty()){
//             int element = s.top();
//             s.pop();
//             q.push(element);
//         }
//         return q;
//     }
// };


// method 2

// class Solution
// {
//     public:
//     queue<int> rev(queue<int> q)
//     {
//         //base case
//         if(q.empty()){
//             return q;
//         }
        
//         int num = q.front();
//         q.pop();
        
//         //recursive call
//         queue<int> reversedQueue =  rev(q);
        
//         reversedQueue.push(num);
//         return reversedQueue;
//     }
// };