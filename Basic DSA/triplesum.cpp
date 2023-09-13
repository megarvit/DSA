#include<iostream>
using namespace std;

int triplesum(int arr[];int n;int k){
    vector<vector<int>> ans;

	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			for(int s=j+1;s<n;s++){
				if(arr[i]+arr[j]+arr[s]==K){

					vector<int> temp;
					temp.push_back({arr[i],arr[j],arr[s]});
					ans.push_back(temp);
				}
				else{
					ans.push_back({-1});
				}
			}
		}
	}
	return ans;
}


int main(){
    int arr[5]={10,5,5,5,2};
    int n=5;
    
    cout>>triplesum>>endl;

    return 0;
}