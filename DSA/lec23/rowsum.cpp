#include<iostream>
using namespace std;


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

/*
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
*/

int largestRowSum(int arr[][4], int row,int col){

    int maxi = INT_MIN;
    int rowIndex = -1;
    
     for(int i=0;i<row;i++){
        int sum = 0;
        for(int j=0;j<col;j++){
            sum += arr[i][j];
        }
        if(sum > maxi){
            maxi = sum;
            rowIndex = i;
        }
    }

    cout<< "the maximum sum is: "<< maxi <<endl;
    return rowIndex;
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

    cout<<endl;

    int ans = largestRowSum(arr,3,4);
    cout<<" max row at index: "<< ans <<endl;

    return 0;
}