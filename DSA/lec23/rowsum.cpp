#include<iostream>
using namespace std;

/*
//to print row wise sum
void printSum(int arr[][4],int row,int col){

    cout<< "Printing sum: "<<endl;

    for(int i=0;i<row;i++){
        int sum = 0;
        for(int j=0;j<col;j++){
            sum += arr[i][j];
        }
        cout<< sum <<" ";
    }
}
*/

//to print column wise sum
void printSum(int arr[][4],int row,int col){

    cout<< "Printing sum: "<<endl;

    // for(int i=0;i<col;i++){
    //     int sum = 0;
    //     for(int j=0;j<row;j++){
    //         sum += arr[j][i];
    //     }
    //     cout<< sum <<" ";
    // }
    for(int col=0;col<4;col++){
        int sum = 0;
        for(int row=0;row<3;row++){
            sum += arr[row][col];
        }
        cout<< sum <<" ";
    }
}

int main(){

    int arr[3][4];

    cout<<"Enter the elements: "<<endl;

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>> arr[i][j];
        }
    }

    cout<<"Printing the array: "<<endl;

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<< arr[i][j]<<" ";
        }
        cout<<endl;
    }

    printSum(arr,3,4);

    return 0;
}