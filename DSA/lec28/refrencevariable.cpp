#include<iostream>
using namespace std;

void update2(int& n){
    n++;
}

void update(int n){
    n++;
}

int main(){

    // int i=5;
    // int& j = i; //refrence variable

    // cout<<i<<endl;
    // i++;
    // cout<<i<<endl;
    // j++;
    // cout<<i<<endl;
    // cout<<j<<endl;

    int n=5;
    cout<<"before: "<<n<<endl;
    // update(n);
    update2(n);
    cout<<"after: "<<n<<endl;



    return 0;
}