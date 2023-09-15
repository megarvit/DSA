#include<iostream>
#include<vector>
using namespace std;

int main(){
    std::string S("Hey");
    S.push_back('\0');
    S.push_back('c');

for(int i = 0; S[i] != '\0'; ++i)
   std::cout << S[i] << endl;

   return 0;
}
