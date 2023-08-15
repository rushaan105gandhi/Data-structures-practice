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
    
    Constructor: Function invoked at the time of object creation with no return type. Same name of the class.
    
    
    Default Constructor: Constructor when no other constructor is defined. Removed when we define our own Constructor.
    
    Parameterized Constructor: Constructor with a parameter.
    
    'This' Keyword: Stores the address of Current Object.
    
    Copy Constructor: used to initialize the members of a newly created object by copying the members of an already existing object. (pass by reference ONLY)
    
    Deep/Shallow Copy: Accessing same memory in case of shallow copy.
    
    Copy Assignment Operator: a = b - - - - > a.health = b.health and so on ...
    
    Destructor (~Classname()): Deallocating memory
    
    object created statically - - - - > Destructor automatically called
    
    object created dynamically - - - - > Destructor to be called manually by delete object; 
    
    Hero *b = new Hero;
    
    delete b;
    
    Const Keyword: 
    
    Static Keyword: Creates a datamember that belongs to class, no need to create an object, can access without creating an object
    
    Syntax to initalize static datamember:
    
    int Hero::time_to_complete = 5; - - - - - >datatype of static data member (here int), Class Name (Here Hero), Scope resolution Opr(::), Value (here 5)
    
    Static Function: no need to create object, no 'this' key word, CAN ONLY ACCESS STATIC MEMBERS
*/
    private:
    char level;
    int health;

    public:  
    char *name;
    static int time_to_complete;

    //Parameterized Constructor
    Hero(){
        cout << "Normal Constructor Called: " << endl;
        this -> health = health;
        this -> level = level;
        name = new char[100];
    }


    //Copy constructor
    Hero(Hero& Kratos){

        //deep copy: creating a new array ch and copying the elements of name in ch.
        char *ch = new char[strlen(Kratos.name) + 1];
        strcpy(ch, Kratos.name);
        this -> name = ch;

        cout << "Copy Constructor Called: " << endl;
        this -> health = Kratos.health;
        this -> level = Kratos.level;
    }


    static int timetocomplete(){
       return time_to_complete;
    }

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

    void setname(char name[]){
        strcpy(this -> name, name);
    }

    void print(){
        cout << this -> name << endl;
        cout << this -> health << endl;
        cout << this ->level << endl;
    }

    ~Hero(){
        cout << "Destructor called: " << endl;
    }

};

int Hero::time_to_complete = 5; 

int main(){

    //Static allocation
    // Hero Paul(90,'D');

    // cout << "This is Paul." << endl;
    // Paul.sethealth(70);
    // Paul.setlevel('A');
    // cout << "Size of Paul is: " << sizeof(Paul) << endl;
    // cout << "Health is: " << Paul.gethealth() << endl;
    // cout << "Level is: " << Paul.getlevel() << endl;

    // cout << "This is Jake" << endl;

    // //dynamic allocation
    // Hero *Jake = new Hero(70, 'D');

    // Jake->sethealth(90);
    // Jake->setlevel('B');
    // cout << "Health is: " << Jake->gethealth() << endl;
    // cout << "Level is: " << (*Jake).getlevel() << endl;

    // //Parameterized Constructor   
    // cout << "Object Logan is defined below: " << endl;
    // Hero Logan(50, 'D');
    // cout << "Object Logan is above." << endl;
    // cout << "Address of Logan: " << &Logan << endl;
    // cout << "Health of Logan: " << Logan.gethealth() << endl;
    // cout << "Level of Logan: " << Logan.getlevel() << endl;

    // //Copy Constructor
    // cout << "This object is Roman: " << endl;
    // Hero Roman(55,'A');

    // cout << "Below is Reigns: " << endl;

    // Hero Reigns(Roman);


    // Hero rushaan;
    // rushaan.sethealth(70);
    // rushaan.setlevel('A');
    // char name[7] = "Gandhi";
    // rushaan.setname(name); 
    // rushaan.print();

    // //using default copy constructor

    // Hero prakhar(rushaan);
    // cout << "this is prakhar" << endl;
    // prakhar.print();

    // rushaan.name[0] = 'A';
    // rushaan.print();

    // rushaan = prakhar;

    // prakhar.print();

    // Hero *Rushaan = new Hero;
    // Rushaan->print();
    // delete Rushaan;


    //No need to create an object
    cout << "No need to create an object: " << Hero::time_to_complete << endl;

    Hero Rushaan;
    cout << Rushaan.time_to_complete << endl;

    return 0;
}