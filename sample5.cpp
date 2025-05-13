#include<iostream>
 
using namespace std;
 
typedef struct POINT{
    string name;
    int x;
    int y;
 
    struct POINT *next;
}COORDINATES;
 
int main(){
 
 
    COORDINATES *point = new COORDINATES;
    COORDINATES  *head = point;
 
    point->name = "First";
    point->x = 10;
    point->y = 20;
    point->next = NULL;
 
    point = new COORDINATES;
    head->next = point; //linking the boxes
    point->name = "SECOND";
    point->x = 30;
    point->y = 40;
    point->next = NULL;
 
    point = new COORDINATES;
    head->next->next = point; //linking the boxes
    point->name = "THIRD";
    point->x = 50;
    point->y = 60;
    point->next = NULL;
 
 
    cout << head->name << endl;
    cout << head->x << endl;
    cout << head->y << endl;
 
    cout << head->next->name << endl;
    cout << head->next->x << endl;
    cout << head->next->y << endl;
 
    cout << head->next->next->name << endl;
    cout << head->next->next->x << endl;
    cout << head->next->next->y << endl;
 
    cout << "-------------LOOP CONVERSION----------------" << endl;
    for(COORDINATES *pos=head; pos!=NULL; pos=pos->next){
        cout << pos->name << endl;
        cout << pos->x << endl;
        cout << pos->y << endl;
    }
   
   
   
    return 0;
}
