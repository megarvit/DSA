#include<bits/stdc++.h>
vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
    int n=a.size();
    int m=b.size();
    int i=0;
    int j=0;
    vector<int> unionarr;
    while(i<n && j<m){
        if(a[i]<= b[j]){
            if(unionarr.size()==0 || unionarr.back()!=a[i]){
                unionarr.push_back(a[i]);
            }
            i++;
        }
        else{
            if(unionarr.size()==0 || unionarr.back()!=b[j]){
                unionarr.push_back(b[j]);
            }
            j++;
        }
    }
    while(j<m){
        if(unionarr.size()==0 || unionarr.back()!=b[j]){
                unionarr.push_back(b[j]);
        }
        j++;
    }
    while(i<n){
        if(unionarr.size()==0 || unionarr.back()!=a[i]){
                unionarr.push_back(a[i]);
        }
        i++;
    }
    return unionarr;
}