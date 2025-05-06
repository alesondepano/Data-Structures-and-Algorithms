#include<iostream>
 
using namespace std;
 
int main(){
 
    int x=5, y=10;
    int capacity = (x + y) * y; //computation
   
 
    int *largearray = new int[capacity];
 
    delete[] largearray;
 
    largearray = new int[capacity*2];
   
    delete[] largearray;
    return 0;
}
