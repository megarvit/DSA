#include<iostream>
using namespace std;

bool isPresent(int arr[][4],int target,int row,int column){
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(arr[i][j] == target){
                return true;
            }
        }
    }
    return false;
}

int main(){

    //2d array
    int arr[3][4];

    //taking input row wise input i row j is column
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    
    //print
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"enter the element to search: "<<endl;

    int target;
    cin>>target;

    if(isPresent(arr,target,3,4)){
        cout<<"element is found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }

    return 0;
}
