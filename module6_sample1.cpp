#include<iostream>
 
using namespace std;
 
 
void sample(int n);
 
void sampleA();
void sampleB();
 
int main(){
 
 
    sample(3);
    cout << "Program Ends..." <<endl;
 
    return 0;
}
 
void sample(int n){
 
    if(n == 0){
        return;
    }
 
    cout << "Hello World...." <<endl;
    sample(n-1);
    cout << "Printing for the value of n" << n << endl;
}
 
void sampleA(){
    cout << "A" << endl;
    sampleB();
}
 
void sampleB(){
    cout << "B" << endl;
    sampleA();
}
