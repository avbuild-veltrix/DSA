#include<iostream>
using namespace std;
int x = 10;

void kartik(){
    x = 23;
}

int main(){
    cout<<x<<endl;
    kartik();
    cout<<x<<endl;
}