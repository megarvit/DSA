#include<iostream>
#include<stack>
using namespace std;

int main(){

    stack<int> s; //creation

    s.push(2);
    s.push(3);
    s.push(4);

    s.pop();

    cout<<"printing top element "<< s.top() <<endl;

    if(s.empty()){
        cout<<"stack is khaali"<<endl;
    }
    else{
        cout<<"stack is not khaali"<<endl;
    }

    cout<<" size of the stack is "<< s.size() <<endl;

    return 0;
}