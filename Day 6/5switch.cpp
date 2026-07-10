#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number ";
    cin>>n;

    switch(n%7){
        case 1:
        cout<<"Monday";
        break;
        case 2:
        cout<<"Tuesday";
        break;
        case 3:
        cout<<"Wednessday";
        break;
        case 4:
        cout<<"Thursday";
        break;
        case 5:
        cout<<"Friday";
        break;
        case 6:
        cout<<"Saturday";
        break;
        case 0:
        cout<<"Sunday";
        break;
    }
}