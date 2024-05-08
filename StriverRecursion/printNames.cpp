#include <iostream>
using namespace std;

//print names N times
void f(int i, int n){
    //base case
    if(i>n){
        return;
    }
    cout<<"Garvit"<<endl;
    f(i+1,n);
}

int main(){
    int n;
    cin>>n;

    f(1,n);

    return 0;
}
