#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    vector<string>  arr={"1","11","111","1111","2","22","222","2222","3","33","333","3333","4","44","444","4444","5","55","555","5555","6","66","666","6666","7","77","777","7777","8","88","888","8888","9","99","999","9999"};
     
    while(t--){
        string key;
        cin>>key;
        int len=0;
        //index-ind
        for(auto ind : arr){
            len+= ind.length();
            if(key==ind){
                break;
            }
        }
        cout<<len<<endl;
    }
    return 0;
}