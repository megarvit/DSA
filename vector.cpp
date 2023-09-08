#include<iostream> 
#include<vector>
using namespace std;

int main(){

    vector<int> v;

    vector<int> a(5,1); //size is 5 and all elements are initialized as 1
    cout<<" print a "<<endl;
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;

    vector<int> last(a); //all elments of a will be added in it
    cout<<" print last "<<endl;
    for(int i:last){
        cout<<i<<" ";
    }cout<<endl;


    cout<<"capacity: "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"capacity: "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"capacity: "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"capacity: "<<v.capacity()<<endl;

    cout<<"size: "<<v.size()<<endl;
    cout<<" Element at 2nd Index--> "<<v.at(2)<<endl;

    cout<<" First/front element: "<< v.front()<<endl;
    cout<<" last/back element: "<< v.back()<<endl;
    cout<<endl;

    cout<<" before pop; "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();

    cout<<" after pop; "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    cout<<" before clear size "<<v.size()<<endl;
    v.clear();
    cout<<" after clear size "<<v.size()<<endl;

}
