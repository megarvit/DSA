// list of elements of same type is called an array
#include<iostream>
using namespace std;

void printArray(int arr[],int size){

    cout<<endl<<"printing the array"<<endl;

    //print
    for (int i = 0; i < size; i++)
    {
        cout<< arr[i]<< " ";
    }
    cout<<endl;

    cout<<endl<<"printing DONE"<<endl;
}

int main(){

    //declare
    int number[15];

    //accessing an array
    cout<< "value at 15 index "<< number[15] <<endl;

    cout<<endl<< "everything is fine"<<endl<<endl;

    //initialising an array
    int second[3]= {1,2,3};
    
    //accessing
    cout<< "value at index 2 "<< second[2]<<endl;

    int third[15]={1,2};
    
    int n=15;
    // cout<<"printing the array"<<endl;
    // //print
    // for (int i = 0; i < n; i++)
    // {
    //     cout<< third[i]<< " ";
    // }
    printArray(third,15);

    //size
    int thirdSize= sizeof(third)/sizeof(int);
    cout<<"size of third is "<< thirdSize<<endl;

    //initialise 
    int fourth[10]={0};
    
    int m=10;

    printArray(fourth,10);

    //initialise 
    int fifth[10]={1};
    
    int o=10;
    
    printArray(fifth,10);

    //size
    int fifthSize= sizeof(fifth)/sizeof(int);
    cout<<"size of fifth is "<< fifthSize<<endl;

    //homework
     int array[100];

    //To initialize the array with value'1'.
    fill_n(array, 100, 5);

    //To check the array input (kewaal 5 hi kari h print)
    for(int i = 0; i <= 20; i++){
        cout << array[i] << " ";
    }
    cout<<endl<<endl;

    char ch[5]={'a','b','c','d','e'};
    cout<<ch[3]<<endl;
    cout<<"printing the array"<<endl;
    //print 
    for (int i = 0; i < 5; i++)
    {
         cout<< ch[i]<< " ";
    }
    cout<<"printing done"<<endl;

    cout<<endl<<" everything is okay "<<endl<<endl;

    double firstdouble[5];
    float firstfloat[5];
    bool firstbool[5];

    return 0;
}