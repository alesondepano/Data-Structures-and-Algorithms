#include<iostream>
#include<string>
#include<stack>
 
using namespace std;
 
 
 
int main(){
 
    stack<string> stackofnames;
 
    cout << stackofnames.size() << endl;
 
    stackofnames.push("C++");
 
    string tmp = "Data Structure";
    stackofnames.push(tmp);
 
    stackofnames.push("Visual Studio");
 
    while(stackofnames.size() != 0){
        string val = stackofnames.top();
        cout << val << endl;
        stackofnames.pop();
 
    }
 
   
 
 
    return 0;
}
