#include <bits/stdc++.h>
using namespace std;

int getlength(char arr[]){
    int count = 0;
    for(int i = 0; arr[i]!='\0';i++){
        count++;
    }
    return count;
}

int main(){
    char name[20];
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Length is: "<<getlength(name);
    return 0;
}