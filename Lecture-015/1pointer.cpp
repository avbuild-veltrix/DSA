#include<iostream>
using namespace std;
int main(){
    
    int x = 10;

    int *p = &x;

    cout << "Value of x                : " << x << endl;

    cout << "Address of x (&x)         : " << &x << endl;

    cout << "Value stored in p         : " << p << endl;

    cout << "Value pointed by p (*p)   : " << *p << endl;

    cout << "Address of pointer (&p)   : " << &p << endl;
}