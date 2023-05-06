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

//functions

// int power(){
//     int a,b;
//     cin>>a>>b;

//     int ans=1;

//     for(int i=1;i<=b;i++){
//         ans=ans*a;
//     }
//     return ans;
// }

// int main(){

//     int ans=power();
//     cout<<"answer is:"<<ans<<endl;

// }

//EvenOdd

//1 -> even
//0 -> odd
// bool isEven(int a){
//     //odd
//     if(a&1){//and 1 means 1 de (1 1 =1)
//         return 0;
//     }
//     else{//even
//         return 1;
//     }
// }

// int main(){

//     int num;
//     cin>>num;

//     if(isEven(num)){
//         cout<<"Number is Even"<<endl;
//     }
//     else{
//         cout<<"Number is Odd"<<endl;
//     }
//     return 0;

// }

//nCr Program

// int fact(int n){

//     int fact=1;
//     for(int i=1; i<=n; i++){
//         fact=fact*i;
//     }
//     return fact;
// }

// int nCr(int n,int r){
//     // int num = fact(n);
//     // int denum = fact(r)*fact(n-r);
//     // return num/denum;
//     int ans= ((fact(n))/(fact(r)*fact(n-r)));
     
//     return ans;
// }

// int main(){

//     int n,r;
//     cin>>n>>r;

//     cout<<"Answer is:"<<nCr(n,r)<<endl;

//     return 0;
// }

//Counting Program


// //function signature
// void printcounting(int n){
//     //function body
//     for(int i=1; i<=n; i++){
//         cout<< i <<" ";
//     }
//     cout<<endl;
// }

// int main(){

//     int n;
//     cin>>n;
//     //function call
//     printcounting(n);

//     return 0;
// }

//Prime Number

//1-prime no
//0-not prime no

// bool isprime(int n){

//     for(int i=2;i<n;i++){
//         //divisible,not prime
//         if(n%i==0){
//             return 0;
//         }
//     }
//     return 1;
// }

// int main(){

//     int n;
//     cin>>n;

//     if(isprime(n)){
//         cout<<"is a prime no."<<endl;
//     }
//     else{
//         cout<<"not a prime no"<<endl;
//     }
//     return 0;
// }

//H.W.1

// int AP(int n){
//     int A= 3*n+7;
//     return A;
// }

// int main(){
//     int n;
//     cin>>n;

//     cout<<"A.P. is:"<<AP(n)<<endl;
// }

//H.W.2

// int setbitsA(int a){
//     int count=0;

//     while(a!=0){
//         if(a&1){
//             count=count+1;
//         }
//         a=a>>1;
//     }
//     return count;
// }

// int setbitsB(int b){
//     int count=0;

//     while(b!=0){
//         if(b&1){
//             count=count+1;
//         }
//         b=b>>1;
//     }
//     return count;
// }

// int main(){
//     int a,b;
//     cin>>a>>b;
//     int ans= setbitsA(a)+setbitsB(b);
//     cout<<"the number of set bits in a and b are "<<ans<<endl;

//     return 0;
// }

//H.W.3

// int fibonacci(int n){
//     int a=0;
//     int b=1;
//     int s=0;
//     for(int i=2;i<n;i++){
//         s= a+b;
//         a=b;
//         b=s;
//     }
//     return s;
// }

// int main(){

//     int n;
//     cin>>n;

//     cout<<"the nth value is:"<<fibonacci(n)<<endl;
//     return 0;
// }

//passByValue
//main function has n and gives dummy function an input variable n; copy is created of n. Any change on n in dummy function wont alter the value of n in main function.

 //H.W.1

//  void update(int a){
//     a=a/2;
//  }
//  int main(){
//     int a=10;
//     update(a);
//     cout<<a<<endl;
//  }
//Answer is 10

//H.W.2

// int update(int a){
//     a-=5;
//     return a;
// }

// int main(){
//     int a=15;
//     update(a);
//     cout<<a<<endl;
// }

//H.W.3

// int update(int a){
//     int ans=a*a;
//     return ans;
// }
// int main(){
//     int a=14;
//     a=update(a);
//     cout<<a<<endl;
// }

