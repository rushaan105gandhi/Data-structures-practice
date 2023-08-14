#include <bits/stdc++.h>
using namespace std;


class Human{

    public:

        int height;
        int weight;
        int age;

    public:

        int getAge(){
            return this -> age;
        }

        void setWeight(int w){
            this -> weight = w;
        }    

};

class Male: public Human{

    public:
    string color;

    void sleep(){
        cout << "Male is sleeping" << endl;
    }
};  


int main(){

    Male object;

    cout << object.age << endl;

    cout << object.color << endl;

    object.sleep();

    return 0;
}