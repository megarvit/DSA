#include<iostream>
using namespace std;

int reversekeequal(){
    int ans=0;
    int x;
    cin>>x; //key
    while(x>0){
        int digit= x%10;
        ans= ans*10 + digit;
        x=x/10;
    }
    return ans;
}

int boringapart(){
    int count;
    for(int i=0;i<10000;i++){
        if(i>10 && ==){
            count=count+1;
        }
        if(i>100 && ){
            count=count+2;
        }
        if(i>1000 && ){
            count=count+3;
        }
        if(i>10000 && ){
            count=count+4;
        }
        return count;
    }
}
int main(){
    int t;
    cin>>t;
    
    while(t--){
        for(int i=0;i<10000;i++){
            
        }
        cout<<boringapart()<<endl;
    }
    return 0;
}