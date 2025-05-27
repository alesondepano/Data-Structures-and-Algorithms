#include<iostream>
#include<string>
#include<stack>
 
using namespace std;
 
typedef struct COORDINATES {
    int x;
    int y;
    string name;
}POINT;
 
int main(){
 
    stack<POINT> stackofpoints;
 
    cout << stackofpoints.size() << endl;
 
    POINT temp;
    temp.name = "First Coordinate";
    temp.x = 10;
    temp.y = 20;
 
    stackofpoints.push(temp);
 
    temp.name = "Second Coordinate";
    temp.x = 30;
    temp.y = 40;
 
    stackofpoints.push(temp);
   
    temp.name = "Third Coordinate";
    temp.x = 50;
    temp.y = 60;
 
    stackofpoints.push(temp);
 
 
    if(stackofpoints.size() == 3){
        cout << "Maximum size of stack has been reached...";
    }else{
        temp.name = "Fourth Coordinate";
        temp.x = 70;
        temp.y = 80;
 
        stackofpoints.push(temp);
    }
 
 
 
 
 
 
    while(!stackofpoints.empty()){
        POINT save = stackofpoints.top();
        cout << save.name << endl;
        cout << save.x << endl;
        cout << save.y << endl;
 
        stackofpoints.pop();
        cout << "-----------------" << endl;
 
    }
   
    return 0;
}
 
