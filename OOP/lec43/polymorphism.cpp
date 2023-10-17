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

class B{
    public:
    int a;
    int b;

    public:
    int add(){
        return a+b;
    }

    void operator+ (B &obj){
        // int value1 = this->a;
        // int value2 = obj.a;
        // cout<< "output "<<value2-value1<<endl;

        cout<<"hello beta"<<endl;
    }

    void operator() (){
        cout<<"m bracket hun bhaiya"<<this->a<<endl;
    }
};

class animal{
    public:
    void speak(){
        cout<<"speaking "<<endl;
    }
};

class dog: public animal{
    public:
    void speak(){
        cout<<"barking "<<endl;
    }
};


int main(){

    dog obj;
    obj.speak();

/*
    B obj1,obj2;

    obj1.a = 4;
    obj2.a = 7;

    obj1 + obj2;

    obj1();
*/



    // A obj;
    // obj.sayHello();
  

    return 0;
} 