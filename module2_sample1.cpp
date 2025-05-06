#include<iostream>
 
using namespace std;
 
 
int x;
int y[100];
 
int main(){
 
   
    int *whereisX = &x;
   
 
    cout << "Value of x : " << x << endl;
    cout << &x << endl; //address of
    cout << "----------------------" << endl;
    cout << whereisX << endl;
    cout << *whereisX << endl;
 
    for(int i=0; i < 100; i++)
        cout << y[i] << " ";
 
 
    return 0;
}




