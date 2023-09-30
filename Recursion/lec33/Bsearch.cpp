#include<iostream>
using namespace std;

void print(int arr[],int s, int e){

    for(int i = s;i<=e;i++){
        cout<<arr[i]<<" ";
    } cout<<endl;
}

bool Bsearch(int *arr,int s,int e, int k){

    print(arr,s,e);

    //base case not found
    if(s>e){
        return false;
    }
    int mid = s + (e-s)/2;
    cout<<"value of mid is "<<arr[mid]<<endl;

    //found
    if(arr[mid]==k){
        return true;
    }

    if(arr[mid]<k){
        return Bsearch(arr,mid+1,e,k);
    }
    else{
        return Bsearch(arr,s,mid-1,k);
    }
}

int main(){

    int arr[6] = {2,4,6,10,14,16};
    int start = 0;
    int end = 5;
    int key = 4;

    bool ans = Bsearch(arr, start, end, key);

    if(ans){
        cout<<"element is present"<<endl;
    } 
    else{
        cout<<"element is absent"<<endl;
    }





    return 0;
}