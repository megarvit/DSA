#include<iostream>
#include <cstring>
// #include "hero.cpp"
using namespace std;

class Hero {

    
    //properties
    private:
    int health;

    public:
    char *name;
    char level;
    static int timeToComplete; //static keyword used

    Hero(){
        cout<<"simple constructor called"<<endl;
        name= new char[100];
    }

    //parameterised constructor
    Hero(int health){
        cout<<"this -> "<<this<<endl;
        this->health = health;
    }

    Hero(int health, char level){
        this->level = level;
        this->health = health;
    }

    //copy constructor
    Hero(Hero& temp){  //pass by refrence

        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name = ch;

        cout<<"copy constructor called "<<endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print(){
        cout<<endl;
        cout<<"name "<<this->name<<" , ";
        cout<<"health "<<this->health<<" , ";
        cout<<"level "<<this->level<<endl;
        cout<<endl;
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

    void setName(char name[]){
        strcpy(this->name,name);
    }

    static int random(){
        return timeToComplete;
    }

    //destructor
    ~Hero(){
        cout<<"destructor bhai called" <<endl;
    }

};

int Hero::timeToComplete = 5;  //initialisation


int main(){

    // cout<<Hero::timeToComplete<<endl;
    cout<<Hero::random()<<endl;

    // Hero a;

    // cout<< a.timeToComplete<<endl;

    // Hero b;
    // b.timeToComplete = 10;
    // cout<< a.timeToComplete<<endl;
    // cout<< b.timeToComplete<<endl;














    // //static
    // Hero a;

    // //dynamic
    // Hero *b = new Hero();
    // //manually called
    // delete b;

    return 0;

}















    // Hero hero1;
    // hero1.sethealth(12);
    // hero1.setlevel('D');
    // char name[7] = "Garvit";
    // hero1.setName(name);

    // //hero1.print();

    // //use default copy constructor

    // Hero hero2(hero1);
    // //hero2.print();

    // hero1.name[0] = 'S';
    // hero1.print();

    // hero2.print();

    // hero1 = hero2; //copy assignment operator

    // hero1.print();

    // hero2.print(); 




    // Hero suresh(70,'C');
    // suresh.print();
    // // suresh.sethealth(70);
    // // suresh.setlevel('A');


    // //copy constructor
    // Hero ritesh(suresh);
    // ritesh.print();

    // ritesh.gethealth = suresh.health;
    // ritesh.level = suresh.level;


















    // //object created statically
    // // cout<<"hi"<<endl;
    // Hero ramesh(10);
    // // cout<<"address of ramesh "<<&ramesh<<endl;
    // // ramesh.gethealth(); //current obj
    // // cout<<"hello"<<endl;

    // ramesh.print();

    // //dynamically
    // Hero *h = new Hero(11);
    // h->print();

    // Hero temp(22,'B');
    // temp.print();











    /*
    //static allocation
    Hero a;
    a.sethealth(80);
    a.setlevel('B');
    cout<<"level is "<<a.level<<endl;
    cout<<"health is "<<a.gethealth() <<endl;

    //dynamic allocation
    Hero *b = new Hero;
    b->setlevel('A');
    b->sethealth(70);
    cout<<"level is "<<(*b).level<<endl;
    cout<<"health is "<<(*b).gethealth() <<endl; 

    cout<<"level is "<<b->level<<endl;
    cout<<"health is "<<b->gethealth() <<endl;

    // //creation of Object
    // Hero ramesh;
    // cout<<"size of ramesh is "<<sizeof(ramesh)<<endl;

    // cout<<"ramesh health is "<<ramesh.gethealth()<<endl;

    // //use setter
    // ramesh.sethealth(80);
    // //ramesh.health = 70;
    // ramesh.level = 'A';

    // //cout<<"size: "<<sizeof(h1) <<endl;

    // cout<<"health is: "<<ramesh.gethealth()<<endl;
    // cout<<"level is: "<<ramesh.level<<endl;
    */

//     return 0;
// }
