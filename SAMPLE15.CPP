#include<iostream>
#include<string>
#include<queue>
 
using namespace std;
 
typedef struct COORDINATES {
    int x;
    int y;
    string name;
}POINT;
 
int main(){
 
    queue<POINT> queueofpoints;
 
    cout << queueofpoints.size() << endl;
 
    POINT temp;
    temp.name = "First Coordinate";
    temp.x = 10;
    temp.y = 20;
 
    queueofpoints.push(temp);
 
    temp.name = "Second Coordinate";
    temp.x = 30;
    temp.y = 40;
 
    queueofpoints.push(temp);
   
    temp.name = "Third Coordinate";
    temp.x = 50;
    temp.y = 60;
 
    queueofpoints.push(temp);
 
 
    queueofpoints.pop();
    queueofpoints.pop();
 
    POINT save = queueofpoints.front();
    cout << save.name << endl;
    cout << save.x << endl;
    cout << save.y << endl;
 
   
   
    return 0;
}
