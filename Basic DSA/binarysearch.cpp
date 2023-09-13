#include<iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key){
    int start=0;
    int end=size-1;

    int mid= start + (end-start)/2;

    while(start <= end){

        if(arr[mid] == key){
            return mid;
        }

        //go to right wala part
        if(key>arr[mid]){
            start=mid+1;
        }
        else{ //for left wala part
            end=mid-1;
        }
        mid= start + (end-start)/2; //updating mid value
    }
    return -1;
}

int main(){
    int even[6]={2,4,6,8,12,18};
    int odd[5]={3,8,11,14,16};

    int evenindex = BinarySearch(even, 6, 18);

    cout<<"Index of 18 is "<< evenindex<<endl;

    int oddindex = BinarySearch(odd, 5, 16);

    cout<<"Index of 16 is "<< oddindex<<endl;


    return 0;
}