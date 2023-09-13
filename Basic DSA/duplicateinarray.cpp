int findDuplicate(vector<int> &arr) 
{
    // Write your code here

    int ans=0;

    //XOR ing all the array elements
    for(int i=0;i<arr.size();i++){
        ans=ans^arr[i];
    }

    //XOR [1,n-1]
    for(int i=1;i<arr.size();i++){
        ans=ans^i;
    }
    //whole array cancels out and one repeating element will get left
	return ans;
}