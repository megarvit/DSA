#include <iostream>
using namespace std;

void printR(int i,int n){
    //base case
    if(i < 1){
        return;
    }
    cout<<i<<" ";
    printR(i-1,n);

}

int main(){
    int n;
    cin>>n;
    // int i = n;
    printR(n,n);

    return 0;
}
