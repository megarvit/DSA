#include<iostream>
#include<vector>
using namespace std;

int getSingleElement(vector<int> &arr){
    
    int n=arr.size();

    int maxi=arr[0];
    for(int i=0;i<n;i++){
        maxi = max(maxi,arr[i]);
    }

    vector<int> hash(maxi+1,0); //size and value
    for(int i=0;i<n;i++){
        hash[arr[i]]++; //incrementing the value like 2 is 2 times 
    }

    for(int i=0;i<maxi+1;i++){
        if(hash[arr[i]] ==1){
            return arr[i];
        }
    }

    return -1;

}

int main()
{
    vector<int> arr = {4, 1, 2, 1, 2};
    int ans = getSingleElement(arr);
    cout << "The single element is: " << ans << endl;
    return 0;
}