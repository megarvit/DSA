#include<iostream>
using namespace std;

void func(int a,int b){

    a++;
    b++;
    cout<<a<<b<<endl;
}

inline int getmax(int& a,int& b){
    return (a>b) ? a:b;
}

int main(){

    int a = 1, b = 2;
    // func(a,b);

    int ans = 0;

    // if(a>b){
    //     ans=a;
    // }
    // else{
    //     ans = b;
    // }

    ans = getmax(a,b);

    cout<<ans<<endl;

    a=a+3;
    b=b+1;

    ans = getmax(a,b);

    cout<<ans<<endl;




    return 0;
}
