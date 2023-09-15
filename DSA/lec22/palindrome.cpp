#include<iostream>
#include<vector>
using namespace std;

char tolowercase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }

    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkpalindrome(char a[], int n){
    int s = 0;
    int e = n-1;

    while(s<=e){
        if( tolowercase(a[s]) != tolowercase(a[e])) {
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

void reverse(char name[],int n){

    int s=0;
    int e= n-1;

    while(s<e){
        swap(name[s++],name[e--]);
    }
}

int getlength(char name[]){
    int count = 0;
    for(int i=0; name[i]!='\0';i++){
        count++;
    }
    return count;
}


int main(){
    char name[20];
    
    cout<<" enter your name: "<<endl;
    cin>>name;

    cout<< "your name is ";
    cout << name <<endl;

    int len = getlength(name);

    cout<<" length is "<<len<<endl;;

    reverse(name,len);

    cout<<"reverse is " << name<<endl;

    cout << " plaindrome or not "<< checkpalindrome(name,len)<< endl;

    cout<< " character is "<< tolowercase('b') <<endl;
    cout<< " character is "<< tolowercase('C') <<endl;
    
    return 0;
    
}