#include<iostream>
using namespace std;
int main(){
    int x = 10, y = 20;
    // int* a = &x, b = &y; //Wrong method
    int* a = &x, *b = &y;
    cout<<x<<endl<<y<<endl<<a<<endl<<b<<endl;
}