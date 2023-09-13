#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>&a, int N) {

    // int sum= (N*(N+1))/2;
    // int s2=0;
    // for(int i=0;i<N-1;i++){
    //     s2=s2+ a[i];
    // }
    // return sum-s2;

    // int xor1=0;
    // int xor2=0;
    // //xor1 is hypo array with all elements
    // for(int i=1;i<=N;i++){
    //     xor1=xor1 ^ i;
    // }
    // for(int i=0;i<N-1;i++){
    //     xor2=xor2 ^ a[i];
    // }
    // return xor1 ^ xor2;

    int xor1 = 0, xor2 = 0;
    int n = N - 1;
    for (int i = 0; i < n; i++) {
    xor2 = xor2 ^ a[i];
    xor1 = xor1 ^ (i + 1);
    }
    xor1=xor1^N;
    return xor1 ^ xor2;

}