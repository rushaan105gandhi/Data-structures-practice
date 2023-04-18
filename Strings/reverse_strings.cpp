#include <bits/stdc++.h>
using namespace std;

void reverse(char arr[], int len){
    int s = 0;
    int e =len-1;
    while(s<=e){
        swap(arr[s++],arr[e--]);
    }
}

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
    int n = getlength(name);
    cout<<"Length is: "<<n<<endl;
    reverse(name,n);
    cout<<"reversed name: "<<name;
    return 0;
}