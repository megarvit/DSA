#include<iostream>
using namespace std;
#define PI 3.14
#define AREA(r) (PI*(r)*(r))

int main(){


    int r = 5;
    //double pi = 3.14;
    double area = AREA(r);
    cout<<"Area is: "<<area<<endl;



    return 0;
}
