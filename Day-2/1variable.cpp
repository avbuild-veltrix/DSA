#include<iostream>
using namespace std;
int main(){
    int x = 9;
    cout<<"Initially the value of x is "<< x <<endl;
    cout<<"Enter the new value of x ";
    cin>>x;
    x = 5*8 + x;
    cout<<"The new value of x after taking another value of x and doing the calculation ' x = 5*8 + x' is "<<x;
}