#include <iostream>
using namespace std;

void print(int i, int n){
    //base case
    if(i<1) return;

    //function call
    print(i-1,n);
    
    cout<<i<<" ";
}

//BackTracking
int main(){
    int n;
    cin>>n;

    print(n,n);

    return 0;
}
