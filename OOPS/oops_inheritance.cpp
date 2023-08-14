#include <bits/stdc++.h>
using namespace std;
/*

    Mode of inheritence: if a pvt member of any class cannot be inherited.

    public < protected < private

*/

class Human{


//    private:


    protected:

        int height;
        int age;
        int weight;
        

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

    int getHeight(){
        return this -> height;
    }
};  


int main(){

    Male object;

    cout << object.getHeight() << endl;


    return 0;
}