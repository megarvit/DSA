#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> v){
	
	int s=0;
	int e= v.size()-1;

	while(s<e){
		swap(v[s++],v[e--]);
	}
	return v;
}

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	
	int i= n-1;
	int j= m-1;
	vector<int> ans;
	int carry=0;

	while(i>=0 && j>=0){
		int val1 = a[i];
		int val2 = b[j];

		int sum = val1 + val2 + carry;

		carry = sum/10;
		sum = sum%10;
		ans.push_back(sum);
		i--;
		j--;
	}

	//case 1 when a is bada
	while(i>=0){
		int sum = a[i] + carry;
		carry = sum/10;
		sum = sum%10;
		ans.push_back(sum);
		i--;
	}

	//case 2 when b is bada
	while(j>=0){
		int sum = b[j] + carry;
		carry = sum/10;
		sum = sum%10;
		ans.push_back(sum);
		j--;
	}

	//case 3 when carry is bacha hua 
	while(carry!=0){
		int sum = carry;
		carry = sum/10;
		sum = sum%10;
		ans.push_back(sum);
	}
	return reverse(ans);
}

void print(vector<int> v){
    for(int i=0; i<v.size(); i++){
        cout<< v[i] << " ";
    }
    cout<<endl;
}

int main(){
    vector<int> v;
    vector<int> s;

    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);

    s.push_back(11);
    s.push_back(7);
    s.push_back(3);
    s.push_back(12);
    s.push_back(4);
    

    vector<int> ans = findArraySum(v,5,s,5);

    print(ans);
}

