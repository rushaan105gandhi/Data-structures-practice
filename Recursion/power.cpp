#include <bits/stdc++.h>
using namespace std;

int calculatePower(int a, int b)
{
    if (b==0)
    {
        return 1;
    }
    if (b == 1)
    {
        return a;
    }
    
    int answer = calculatePower(a, b/2);
    
    if (b%2 == 0){
        return answer*answer;
    }
    else{
        return a * answer*answer;
    }
}

int main()
{
    int a,b;
    cout << "Enter A\n";
    cin >> a;
    cout<< "Enter B\n";
    cin>>b;
    
    cout<< a << " raised to the power "<< b<< " is: " <<calculatePower(a,b);
    
    return 0;
    
}