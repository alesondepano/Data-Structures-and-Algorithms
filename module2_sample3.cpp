#include<iostream>
 
using namespace std;
 
int main(){
 
    int arraynum[10] = {1,2,3,4,5};
    int *locationofarraynum = arraynum;
 
    //cout << arraynum[2] << endl;
    cout << locationofarraynum[2] << endl;
    locationofarraynum[2] = 999;
 
    cout << arraynum[2] << endl;
 
 
 
 
    return 0;
}
