#include<iostream>
 
using namespace std;
 
//Abstract Data Type (Computer)
typedef struct COMPUTER {
    //DATA/PROPERTIES
    string brand;
    float cpuspeed;
    int memory;
 
    //OPERATIONS/METHODS
    void displayComputerInformation(){
        cout << brand << " ----- " << endl;
        cout << cpuspeed << endl;
        cout << memory << endl;
    }
 
    void setValues(string b, float s, int m){
        brand = b;
        cpuspeed = s;
        memory = m;
    }
 
}COMPUTERDATATYPE;
 
int main(){
 
    COMPUTERDATATYPE c1,c2;
 
    c1.setValues("Lenovo",3.45f,16);
    c2.setValues("Asus",3.5f,32);
 
    c1.displayComputerInformation();
    c2.displayComputerInformation();
 
    return 0;
}
