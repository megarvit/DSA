#include<iostream>
using namespace std;

void print(int n){//tail recursion
    
    if(n==0)//base case
        return;
    
    cout<<n<<endl; //processing

    print(n-1); //rr
    
}

void print2(int n){//head recursion
    
    if(n==0){//base case
        return ;
        
    }

    print2(n-1); //rr

    cout<<n<<endl; //processing   
}



int main(){

    int n;
    cin>>n;
    cout<<endl;

    print2(n);


    return 0;
}