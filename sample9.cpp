#include<iostream>
#include<list>
 
using namespace std;
 
typedef struct PERSON {
    string nickname;
    int age;
    float salary;
}EMPLOYEE;
 
 
int main(){
 
    list<EMPLOYEE> listofemployee;
    if(listofemployee.empty() == true){
        cout << "Empty..." << endl;
    }else{
        cout << "not empty.." <<endl;
    }
 
    cout << "Size : " << listofemployee.size() << endl;
    cout << "Size : " << listofemployee.max_size() << endl;
 
    EMPLOYEE temp;
 
    temp.nickname = "Regie";
    temp.age = 21;
    temp.salary = 9500.50;
 
    listofemployee.push_back(temp);
 
    temp.nickname = "Pedro";
    temp.age = 25;
    temp.salary = 10500.50;
 
 
    listofemployee.push_back(temp);
 
    temp.nickname = "Juan";
    temp.age = 30;
    temp.salary = 50500.50;
 
    listofemployee.push_back(temp);
 
    cout << "Size : " << listofemployee.size() << endl;
 
    EMPLOYEE first = listofemployee.front();
    EMPLOYEE last  = listofemployee.back();
   
    cout << "First ... " << first.nickname << " last: " << last.nickname << endl;
 
   
 
    cout << "--------------Link List Output---------- " << endl;
    list<EMPLOYEE>::iterator pos;
    for(pos=listofemployee.begin(); pos!=listofemployee.end(); pos++){
        cout << pos->nickname << endl;
        cout << pos->age << endl;
        cout << pos->salary << endl;
 
    }
 
   
 
    return 0;  
}
 
