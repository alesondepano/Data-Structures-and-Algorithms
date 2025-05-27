#include<iostream>
 
using namespace std;
 
void call1();
void call2();
 
int main(){
 
    call1();
    cout << "Program Ends" << endl;
 
    return 0;
}
 
void call1(){
 
    call2();
    cout << "Call1 ends..." << endl;
 
}
 
void call2(){
 
    int array[1000]; //stack
 
    cout << "Call2 ends...." << endl;
 
}
 
