// this is a C++ program about containers
// this is a new branch
#include <vector>
#include <string>
#include <iostream>
using namespace std;
int main(){
vector<string> svec = {"I","am","happy"};
for(auto iter = svec.begin(); iter != svec.end; ++iter){
cout << *iter << endl;
}
return 0;
}
