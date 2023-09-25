#include<iostream>
using namespace std;


int getsum(int* arr,int n){
    int sum = 0;
    for(int i= 0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){

    // char ch = 'q';
    // cout<<sizeof(ch)<<endl;

    // char* c = &ch;
    // cout<<sizeof(c)<<endl;

    int n;
    cin>>n;

    int* arr = new int[n]; //heap m arr


    for(int i= 0;i<n;i++){
        cin>>arr[i];
    }

    int ans = getsum(arr,n);

    cout<<"ans is "<<ans<<endl;

    /*
    //case 1
    while(true){
        int i=5;
    } //memory releases 4 byte only

    //case 2
    while(true){
        int* ptr = new int;
        delete ptr; 
        //for array deletion
        //delete []arr;
    } //12 byte stack waali free but not heap waali
    */

    return 0;
}