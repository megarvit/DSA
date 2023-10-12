#include<iostream>
// #include "hero.cpp"
using namespace std;

class Hero {

    
    //properties
    private:
    int health;
    public:
    char level;

    void print(){
        cout<<level<<endl;
    }

    int gethealth(){
        return health;
    }

    char getlevel(){
        return level;
    }

    // void sethealth(int h, char name){
    //     if(name == "A"){
    //         health = h;
    //     }
    // }
    void sethealth(int h){
        health = h;
    }

    void setlevel(char ch){
        level = ch;
    }

};

int main(){

    //creation of Object
    Hero ramesh;
    cout<<"size of ramesh is "<<sizeof(ramesh)<<endl;

    cout<<"ramesh health is "<<ramesh.gethealth()<<endl;

    //use setter
    ramesh.sethealth(80);
    //ramesh.health = 70;
    ramesh.level = 'A';

    //cout<<"size: "<<sizeof(h1) <<endl;

    cout<<"health is: "<<ramesh.gethealth()<<endl;
    cout<<"level is: "<<ramesh.level<<endl;


    return 0;
}
