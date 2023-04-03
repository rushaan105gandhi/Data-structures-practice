#include <iostream>
#include <vector>

using namespace std;

int main(){

    //capacity and size are different
    vector<int> v;
    cout<<"capacity: "<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"capacity: "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"capacity: "<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"capacity: "<<v.capacity()<<endl;

return 0;
}
