#include <bits/stdc++.h>
using namespace std;

bool palindrome(char str[], int n){
    int s = 0;
    int e = n-1;
    while(s<=e){
        if(str[s]!=str[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
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
    if(palindrome(name,n)){
        cout<<"your string is palindrome";
    }
    else{
        cout<<"Not palindrome";
    }

    return 0;
}