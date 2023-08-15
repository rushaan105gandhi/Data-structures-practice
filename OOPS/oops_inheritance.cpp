#include <bits/stdc++.h>
using namespace std;

/*

    Mode of inheritence: if a pvt member of any class cannot be inherited.

    public < protected < private

    Types of inheritance: 
        1. Single Inheritance: Single derived class is inherited from single base class.
        2. Multi-level Inheritance:  the process of deriving a class from another derived class.
        3. Multiple Inheritance: object or class can inherit features from more than one parent object or parent class. 
        4. Hierarchical inheritance: Hierarchical inheritance, more than one sub-class inherits the property of a single base class.   
        5. Hybrid Inheritance: Combination of more than one type of inheritance.
    
    What is Inheritance Ambiguity? How to remove inheritance ambiguity?
        When 2 different classes have same function name, and the child inherits the parent classes and the function is called.
        obj.Parent_class::function_name;

*/

class Human{


//    private:


    public:

        int height;
        int age;
        int weight;
        
        void fun(){
            cout << "This is parent fun" << endl;
        }

        int getAge(){
            return this -> age;
        }

        void setWeight(int w){
            this -> weight = w;
        }    

};


//Class 2:

class Animal{

    public:
        int hair;

        void fun(){
            cout << "Hair color is brown" << endl;
        }
};


//Class inherited from human
class Male: public Human{

    public:
    string color;

    void fun1() {
        cout << "This is fun1" << endl;
    }

    void sleep(){
        cout << "Male is sleeping" << endl;
    }

    int getHeight(){
        return this -> height;
    }
};  


//Multilevel inheritance/ Multiple Inheritance
class Indian: public Human, public Animal{


};

//Inherited from human
class Female: public Human, public Animal{

    public:
        void fun1(){
            cout << "This is fun3" << endl;
        }

};


int main(){

    Female girl;

    girl.Human::fun();

    girl.Animal::fun();


    return 0;
}