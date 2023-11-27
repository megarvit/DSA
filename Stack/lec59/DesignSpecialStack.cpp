#include<stack>
#include<limits.h>

class SpecialStack {
    stack<int> s;
    int mini = INT_MAX;;

    public:
        
    void push(int data) {
        //for first element
        if(s.empty()){
            s.push(data);
            mini = data;
        }
        else{    //data is nothing but curr element
            if(data < mini){
                // int val = 2*data-mini;
                // s.push(val);
                s.push(2*data-mini);
                mini = data;
            }
            else{
                mini = data;
            }
        }
    }

    void pop() {
        if(s.empty()){
            return -1;
        }
        int curr = s.top();
        s.pop();

        if(curr > mini){
            return curr;
        }
        else{
            int prevMin = mini;
            int val = 2*mini - curr;
            mini = val;
            return prevMin;
        }
    }

    int top() {
        if(s.empty()){
            return -1;
        }
        int curr = s.top();
        if(curr < mini){
            return mini;
        }
        else{
            return curr;
        }
    }

    int getMin() {
        if(s.empty()){
            return -1;
        }
        return mini;
    }  
};