#include<iostream>
using namespace std;

//switch statement:
// int main(){

//     char ch='a';

//     cout<<endl;
//     switch ( ch )
//     {
//     case 1:
//         cout<<"First"<<endl;
//         break;

//     case '1': cout<<"character one"<<endl;
//         break;
    
//     default: cout<<"it is a default case"<<endl;
//     }
//     cout<<endl;

//     return 0;
// }

// int main()
// {
//     int n;
//     cin >> n;

//     cout<<endl;
//     while(INT_MIN){
//         switch (n){
//             case 1: cout <<"bla"<< endl;
//             break;
//             case 2: cout << "int" << endl;
//             break; 
//             // WHY WE CAN'T USE CONTINUE STATEMENT IN CASE OF SWITCH CASE?
//             // ANS: CONTINUE CAN'T BE USED IN CASE OF SWITCH CASE BECAUSE AS THE CASE CONSTANT MATCHES WITH THE USERS INPUT THE FLOW WILL COME DOWN AND TRY TO EXECUTE BUT BECAUSE OF CONTINUE IT WILL SKIP THAT PART AND ITERATION WILL GO ON AND ON. THAT'S WHY WE USE BREAK , TO STOP  AT THE POINT ONCE WE EXUCUTE OUR PART.
//             default: cout << "default" << endl;
//         }
//         exit(0);
//     }
//     return 0;
// }

//MINI-CALCULATOR

// int main(){

//     int a,b;

//     cout<<"input the value of a:"<<endl;
//     cin>>a;

//     cout<<"input the value of b:"<<endl;
//     cin>>b;

//     char op;
//     cout<<"input the operation which you want to perform betwenn a and b"<<endl;
//     cin>>op;

//     switch (op)
//     {
//     case '+': cout<< (a+b) <<endl;
//         break;

//     case '-': cout<< (a-b) <<endl;
//         break;

//     case '*': cout<< (a*b) <<endl;
//         break;

//     case '/': cout<< (a/b) <<endl;
//         break;

//     case '%': cout<< (a%b) <<endl;
//         break;
    
//     default: cout<<"Please enter a valid operation guys"<<endl;
//         break;
//     }
// }

//NOTE CALCULATOR
// int main(){

//     int A;
//     int a,b,c,d;

//     cout<<"input the amount:"<<endl;
//     cin>>A;

//     switch (1)
//     {
//     case 1: a=A/100;
//     cout<<"No of 100 ruppee notes are:"<<a<<endl;
//     A=A-a*100;

//     case 2: b=A/50;
//     cout<<"No of 50 ruppee notes are:"<<b<<endl;
//     A=A-b*50;

//     case 3: c=A/20;
//     cout<<"No of 20 ruppee notes are:"<<c<<endl;
//     A=A-c*20;

//     case 4: d=A;
//     cout<<"No of 1 ruppee notes are:"<<d<<endl;
//     A=A-d;

//     }
//     return 0;
// }

//