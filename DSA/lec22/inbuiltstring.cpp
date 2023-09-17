#include<iostream>
#include<cstring>
using namespace std;



int main(){
    char name[20];
    
    cout<<" enter your name: "<<endl;
    cin>>name;
    char name2[20];
    
    cout<<" enter your name: "<<endl;
    cin>>name2;

    cout<< "your name is ";
    cout << name <<endl;

    //length
    cout<<" length is "<< strlen(name)<<endl;
    
    //compare
    int k = strcmp(name,name2);
    cout<<"comparing: "<<k<<endl;

    //copy a string
    strcpy(name2,name);
    cout<<strcpy(name2,name);
    
    return 0;
}