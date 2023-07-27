#include<bits/stdc++.h>
using namespace std;
#include<vector>

int main(){

    int t,n;
    cin>>t;
    while(t--){
        int arr[100];
        cin>>n;
        for(int i=0;i<n; i++){
            cin>>arr[i];
        }
        if(n==1){
            cout<<"YES"<<endl;
            continue;
        }
        sort(arr,arr+n);
        vector<int>v;
        int dif = 0;
        for(int i=1; i<n; i++){
            dif = abs(arr[i] - arr[i-1]);
            v.push_back(dif);
        }
        sort(v.begin(), v.end(), greater<int>()); //GREATER FOR DESCENDING ORDER
        if(v[0] > 1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

    }
    return 0;
}