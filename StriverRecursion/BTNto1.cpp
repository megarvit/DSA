#include <iostream>
using namespace std;

void print(int i, int n){
    //last guy executes first
    //base case
    if(i > n){
        return ;
    }
    //function call
    print(i+1,n);

    cout<<i<<" ";
}

int main(){
    int n;
    cin>>n;
    
    print(1,n);

    return 0;
}
