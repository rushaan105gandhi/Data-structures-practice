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
    Padding: Adding some empty bytes to the memory in the structure to naturally align the data members in a memory/class.
    Static Allocation: Hero a; - - - - - -> a.sethealth() - - - -> a.gethealth()
    Dynamic Allocation: Hero *a = new Hero; - - - > a -> sethealth() - - - > a -> gethealth()
*/
    private:
    char level;
    int health;

    public:  
    // char name[100];
    
    int gethealth(){
        return health;
    }

    char getlevel(){
        return level;
    }

    void sethealth(int h){
        health = h;
    }

    void setlevel(char lvl){
        level = lvl;
    }

};

int main(){

    //Static allocation
    Hero Paul;

    cout << "This is Paul." << endl;
    Paul.sethealth(70);
    Paul.setlevel('A');
    cout << "Size of Paul is: " << sizeof(Paul) << endl;
    cout << "Health is: " << Paul.gethealth() << endl;
    cout << "Level is: " << Paul.getlevel() << endl;

    cout << "This is Jake" << endl;

    //dynamic allocation
    Hero *Jake = new Hero;

    Jake->sethealth(90);
    Jake->setlevel('B');
    cout << "Health is: " << Jake->gethealth() << endl;
    cout << "Level is: " << (*Jake).getlevel() << endl;


    return 0;
}