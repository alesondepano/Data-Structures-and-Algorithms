#include<iostream>
 
using namespace std;
 
 
void sample(int n);
 
void sampleA();
void sampleB();
 
int fib(int n);
 
int main(){
 
 
    int result = fib(5);
    cout << "Program Ends... " << result << endl;
 
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
 
int fib(int n)
 {
    if (n <= 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
 }
