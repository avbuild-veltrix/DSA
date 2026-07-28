#include<iostream>
using namespace std;
int main(){
    int* ptr;//It can only store the address of only integer.
    int** p;//It can only store the address of integer pointer.
    int x = 20;
    ptr = &x;
    p = &ptr;
    cout<<ptr<<" "<<p<<" "<<&p;
}