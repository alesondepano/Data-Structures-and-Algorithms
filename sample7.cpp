#include<iostream>
#include<list>
 
using namespace std;
 
 
int main(){
 
    list<int> listofnumbers;
    if(listofnumbers.empty() == true){
        cout << "Empty..." << endl;
    }else{
        cout << "not empty.." <<endl;
    }
 
    cout << "Size : " << listofnumbers.size() << endl;
    cout << "Size : " << listofnumbers.max_size() << endl;
 
    listofnumbers.push_back(1);
    listofnumbers.push_back(2);
    listofnumbers.push_back(3);
 
    cout << "Size : " << listofnumbers.size() << endl;
 
    listofnumbers.push_front(4);
 
    cout << "Size : " << listofnumbers.size() << endl;
 
    return 0;  
}
