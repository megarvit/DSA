// #include <bits/stdc++.h> 
// vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
// {
// 	// Write your code here.

// 	vector<int> ans;

// 	for(int i=0;i<n;i++){
// 		int element=arr1[i];

// 		for(int j=0;j<m;j++){

// 			if(element<arr2[j])
// 				break;

// 			if(element==arr2[j]){
// 				ans.push_back(element); 
// 				arr2[j]=-11234; //can also use int_min, this number wont map with others
// 				break; 
// 			}
// 		}
// 	}
// 	return ans;
// } not so optimised

#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	int i=0,j=0;  //2 pointer approach
	vector<int> ans;
	
	while(i<n && j<m){
		
		if(arr1[i]==arr2[j]){
			ans.push_back(arr1[i]);
			i++;
			j++;
		}
		
		else if(arr1[i]<arr2[j]){
			i++;
		}
		
		else{ 
			j++;     //when arr1>arr2
		}
	}
	return ans;
}