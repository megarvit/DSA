#include<iostream>
using namespace std;



void reverse(string& str, int i, int j){ //new str &

    cout<<"call revieved for "<<str<<endl;

    //base case
    if(i>j){
        return ;
    }
    else{
        swap(str[i++],str[j--]);
        reverse(str,i,j);
    }
}

int main(){

    string name = "garvit";

    reverse(name, 0, name.length()-1);

    cout<< name << endl;


    return 0;
}