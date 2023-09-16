int longestSubarrayWithSumK(vector<int> a, long long k) {
    
    int n= a.size();
    int len = 0;

    // for(int i=0;i<n;i++){
    //     for(int j=i;j<n;j++){

    //         long long sum=0;
    //         //sum of subarray
    //         for(int k=i;k<=j;k++){
    //             sum+=a[k];
    //         }
    //         if(sum == k){
    //             len = max(len,j-i+1);
    //         }
    //     }
    // }
    return len;

    for(int i=0;i<n;i++){
        long long sum=0;
        for(int j=i;j<n;j++){
            sum+=a[j];
            if(sum == k){
                len = max(len,j-i+1);
            }
        }
    }
    return len;
}