#include<iostream>
using namespace std;

class A {

    public:
    void sayHello(){
        cout<<"hello garvit"<<endl;
    }

    void sayHello(string name){
        cout<<"hello"<<name<<endl;
    }
};


int main(){

    A obj;
    obj.sayHello();
  

    return 0;
} 