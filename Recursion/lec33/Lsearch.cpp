#include<iostream>
using namespace std;


void print(int arr[], int n){
    cout<<"Size of array is "<< n <<endl;

    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

bool Lsearch(int arr[], int size, int key){

    print(arr,size);
    //base case
    if(size == 0){
        return false;
    }
    if(arr[0] == key){
        return true;
    }
    else{
        bool remainingpart = Lsearch(arr+1,size-1,key);
        return remainingpart;
    }
    

}

int main(){

    int arr[5] = {3,5,1,2,6};
    int size = 5;
    int key = 2;

    bool ans = Lsearch(arr, size, key);

    if(ans){
        cout<<"element is present"<<endl;
    } 
    else{
        cout<<"element is absent"<<endl;
    }





    return 0;
}