#include<iostream>
using namespace std;
int main(){
    int x = 9;
    int y = 9;
    int *p1 = &x;
    int *p2 = &y;
    *p2 = 20;

    cout<<&x<<endl<<&y<<endl;
    cout<<p1<<" "<<p2<<endl;
    cout<<*p1<<endl;
    cout<<*p2<<endl;
}