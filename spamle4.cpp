#include<iostream>
 
using namespace std;
 
int main(){
 
 
    float realnumbers[10] = {0.0f};
 
    float *whereisthearray = realnumbers;
 
    cout << whereisthearray << endl;
    cout << realnumbers << endl; //base name --> pointer
    cout << " ----------------" << endl;
    realnumbers[0] = 1.1f;
    realnumbers[1] = 2.2f;
    realnumbers[2] = 3.3f;
 
    //pointer arithmetic
    cout << whereisthearray << " " << &realnumbers[0] << endl;
    cout << whereisthearray+1 << " " << &realnumbers[1] << endl;
    cout << whereisthearray+2 << " " << &realnumbers[2] << endl;
 
    cout << *whereisthearray << " " << *realnumbers << endl;
    cout << *(whereisthearray+1) << " " << *(realnumbers+1) << endl;
    cout << *(whereisthearray+2) << " " << *(realnumbers+2) << endl;
 
    cout << whereisthearray[0] << " " << *realnumbers << endl;
    cout << whereisthearray[1] << " " << *(realnumbers+1) << endl;
    cout << whereisthearray[2] << " " << *(realnumbers+2) << endl;
 
    return 0;
}
