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
 
    cin >> tmp;
    stackofnames.push(tmp);
 
    cout << stackofnames.size() << endl;
 
    string data = stackofnames.top();
    cout << data << endl;
 
    return 0;
}
 
