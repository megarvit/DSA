#include<iostream>
using namespace std;

class Student{

    private:
    //data members
        string name;
        int age;
        int height;

    public:
    //function
    int getAge(){
        return this->age;
    }   
};

int main(){

    Student first;
    cout<<"everything is fine "<<endl;

    
    return 0;
} 