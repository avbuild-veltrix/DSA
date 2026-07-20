#include<iostream>
using namespace std;

void triangle(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout<<"*  ";
        }
        cout<<endl;
    }
}

int main(){
    int a, b, c;
    cout<<"Enter the number of rows ";
    cin>>a;
    triangle(a);
    cout<<"Enter the number of rows ";
    cin>>b;
    triangle(b);
    cout<<"Enter the number of rows ";
    cin>>c;
    triangle(c);
}