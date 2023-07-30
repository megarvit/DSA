#include<iostream>
using namespace std;

int search(int arr[],int size, int key){
    int count=0;
    for(int i=0;i<size;i++){
        
        if(arr[i]==key){
            count+=1;
            
        }
        
    }
    cout<<" count of that number is: "<<count<<endl;
    return 0;
}

int main(){

    int arr[10]={1,2,3,3,3,3,3,3,3,4};
    cout<<" Enter the element to search for "<< endl;

    int key;
    cin>>key;
    
    
    search(arr, 10,key);


    return 0;
}