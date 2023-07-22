#include<iostream>
using namespace std;

// int sumarr(int arr[],int n){
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum+=arr[i];
//     }
//     return sum;
// }
// int main(){
//     int a[100];
//     int n;

//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     cout<<"sum of array"<<sumarr(a,n)<<endl
// }
int SumArr(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){
    int a[100];
    int n;

    //Taking the size of the array
    cin>>n;

    //taking the array from the user
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<" The sum of all the elements in the array is: "<<SumArr(a,n)<<endl;
}