// Function to reverse first k elements of a queue.
// queue<int> modifyQueue(queue<int> q, int k) {
//     //step 1
//     stack<int> s;
//     for(int i = 0;i<k; i++){
//         int val = q.front();
//         q.pop();
//         s.push(val);
//     }
    
//     //step 2
//     while(!s.empty()){
//         int val = s.top();
//         s.pop();
//         q.push(val);
//     }
    
//     //step 3
//     int t = q.size() - k;
//     while(t--){
//         int val = q.front();
//         q.pop();
//         q.push(val);
//     }
//     return q;
// }