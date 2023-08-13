#include <bits/stdc++.h>
using namespace std;

class Hero{ 
/*    
    Object Oriented Programming: Programming where organization of the software is based around objects.
    Object: entity that has attributes.
    Class: BluePrint of the object.
    Empty Class: Class with no property has sizeof 1 byte.
    Access Modifiers: Private, Public, Protected  (By default: Private).
    Getters/Setters: used to access attributes of private datamembers.
*/
    //properties
    private:
    char level;
    int health;

    public:  //Access Modifier------------> By default Private
    char name[100];
    
    int gethealth(){
        return health;
    }

    int getlevel(){
        return level;
    }

    void sethealth(int h){
        health = h;
    }


    void print(){
        cout << "Level is: " << level << endl;
    }
};

// class Box{ //Empty Class: Class w no property <------------Size of Empty Class = 1------------->

//     // //properties
//     // char name[100];
//     // int health;
//     // char level;
// };


int main(){

    //creating object
    // Hero rushaan;

    // Box dabba;

    // cout<<"size of Rushaan: "<<sizeof(rushaan)<<endl;

    // cout<<"size of Dabba: "<<sizeof(dabba)<<endl;

    Hero Paul;
    Paul.sethealth(70);
    cout<<"Health is: "<<Paul.gethealth();


    return 0;
}