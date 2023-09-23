#include<iostream>
using namespace std;

void update(int **p2){
    // p2 = p2 +1;
    //kuch change hoga? ans NO

    // *p2 = *p2 +1; 
    //isse change hoga

     **p2=**p2+1;
    // //kuch change hoga?
}

int main(){

    int i=5;
    int* p = &i;
    int**p2 = &p;

    // cout<<endl<<" sab sahi chl raha h"<<endl;

    // cout<<"printing p"<<p <<endl;
    // cout<<"printing p"<<&p <<endl;

    // cout<<" *p2 "<<*p2 <<endl;
    
    // cout<<"printing i "<<i <<endl;
    // cout<<"printing i "<<*p <<endl;
    // cout<<"printing i "<<**p2 <<endl;

    // cout<<&i<<endl;
    // cout<<p<<endl;
    // cout<<*p2<<endl;

    // cout<<&p<<endl;
    // cout<<p2<<endl;

    cout<<"before:" <<endl;
    cout<<i<<endl;
    cout<<p<<endl;
    cout<<p2<<endl;

    update(p2);

    cout<<"after:" <<endl;
    cout<<i<<endl;
    cout<<p<<endl;
    cout<<p2<<endl;




    






    return 0;
}