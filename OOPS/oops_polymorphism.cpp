#include <bits/stdc++.h>
using namespace std;


/*

FUNCTION OVERLOADING:  a feature of object-oriented programming where two or more functions can have the same name but different parameters.

Functions with different return types cannot be overloaded.  

OPERATOR OVERLOADING: operator is overloaded to give it the user-defined meaning

*/


class A{

    public:
        void sayHello() {
            cout << "Hello Rushaan Gandhi" << endl;
        }

        void sayHello(string name) {
            cout << "Hello Rushaan Gandhi the Second" << endl;
        }
};

class B {

    public:
        int a;
        int b;

        int add(){
            return a + b;
        }
      //return_type operator OPERATOR (input)
        void operator+ (B &obj) {
            int value = this -> a;
            int value2 = obj.a;
            cout << "output: " << value2 - value << endl;            
        }

};

class Animal {

    public:
    void speak(){
        cout << "Speak" << endl;
    }
};

class Dog: public Animal {
    public:
    void speak(){
        cout << "barking" << endl;
    }
};

int main() {

// B obj1, obj2;

// obj1.a = 4;

// obj2.a = 7;

// obj1 + obj2;

Dog obj;

obj.speak();

    return 0;
    
}