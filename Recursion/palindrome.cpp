#include <bits/stdc++.h>
using namespace std;

bool check(string &str, int i, int j)
{
    if (i >= j)
    {
        return true;
    }
    
    if (str[i] != str[j])
    {
        return false;
    }
    i++;
    j--;
    return check(str, i, j);
}

int checkPalindrom(string str) {
    int ans = check(str, 0, str.length()-1);
    return ans;
}
int main() {
    string s = "tamat";
    int ans = checkPalindrom(s);
    if (ans == 1) {
        cout << "is palindrome";
    }
    else {
        cout<<"not a palindrome";
    }
    
    return 0;
}

