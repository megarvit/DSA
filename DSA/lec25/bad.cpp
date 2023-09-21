#include<iostream>
using namespace std;

int main(){
    // int *p; //bad practise pointing to garbage address
    // int *p3 = 0;
    // cout<< "value "<<*p3 <<endl; //segmentation fault

    /*
    int i=5;
    int *q = &i;
    cout << q <<endl;
    cout << *q <<endl;


    int *p = 0;
    p = &i;

    cout << p <<endl;
    cout << *p <<endl;
    */

   int num =5;
   int a = num;
   cout << "a before " << num <<endl;
   a++;
   cout << "a after " << num <<endl;

   cout<<num<<endl;

   int *p = &num;
   cout << "before " << num <<endl;
   (*p)++;
   cout << "after " << num <<endl;

    //copying a pointer

    int *q = p;
    cout << p <<" - "<<q <<endl;
    cout << *p <<" - "<< *q <<endl;

    //pointer arithmetic
    int i = 3;
    int *t = &i;
    //cout<<(*t)++<<endl;

    *t = *t +1;

    cout<< *t <<endl;
    cout<< "before t "<< t <<endl;
    t = t+1;
    cout<< "after t "<< t <<endl;





    return 0;

}