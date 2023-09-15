#include<iostream>
#include<vector>
using namespace std;


// int arr[10];
// int main(){
//     for(int i=0;i<10;i++){
//     cin>>arr[i];
//     }
//     for(int i=0; i<10; i++){
//         cout<< arr[i] << " ";
//     }
// }



int main(){
    char name[20];
    
    cout<<" enter your name: "<<endl;
    cin>>name;
    name[2] = '\0'; //null character

    cout<< "your name is ";
    cout << name <<endl;

    return 0; 
}