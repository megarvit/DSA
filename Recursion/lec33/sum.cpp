#include<iostream>
using namespace std;

int sum(int *arr, int size){

    //base case
    if(size == 0){
        return 0;
    }
    if(size == 1){
        return arr[0];
    }

    else{
        int ansSum = arr[0]; 
        ansSum= arr[0] + sum(arr+1,size-1);
        return ansSum;
    }
}

int main(){

    int arr[5]={3,2,5,1,6};
    int size = 5;

    int ans = sum(arr,size);

    cout<<ans<<endl;



    return 0;
}