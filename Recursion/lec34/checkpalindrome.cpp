#include<iostream>
using namespace std;

bool checkPalindrome(string str, int i, int j){

    //  base case
    if(i>j){
        return true;
    }
    if(str[i] != str[j]){
        return false;
    }
    else{
        return checkPalindrome(str,++i,--j);
    }

}

int main(){

    string name ="naman";
    cout<<endl;

    bool isPalindrome = checkPalindrome(name, 0 , name.length()-1);

    if(isPalindrome){
        cout<<"it is a palindrome"<<endl;
    } 
    else{
        cout<<"it is not a palindrome"<<endl;
    }

    return 0;
}