#include<iostream>
#include<vector>
using namespace std;

char getMaxOccuringChar(string str)
    {
        int arr[26] = {0};
        
        //create an array of count of characters
        for(int i=0;i<str.length();i++){
            char ch = str[i];
            int number = 0;
            //lowecase
            // if(ch>= 'a' && ch<= 'z'){
            //     number = ch - 'a';
            // }
            // else{//uppercase
            //     number = ch - 'A';
            // }
            number = ch - 'a';
            arr[number]++;
        }
        //find maximum occ character 
        int maxi = -1,ans = 0;
        for(int i= 0; i<26;i++){
            if(maxi < arr[i]){
                ans = i;
                maxi= arr[i];
            }
        }
        char finalAns = 'a' + ans;
        return finalAns;
        
    }

int main(){
    string s;
    cin>>s;

    cout<<getMaxOccuringChar(s) <<endl;

    return 0;
}