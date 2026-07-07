#include<iostream>
using namespace std;
int main(){
    float P,R,T;
    cout<<"Enter the Principle amount ";
    cin>>P;
    cout<<"Enter the Rate of interest ";
    cin>>R;
    cout<<"Enter the time in year ";
    cin>>T;
    float SI;
    SI = (P*R*T)/100;
    cout<<"The simple interest of Principle amount "<<P<<" at the rate of "<<R<<" for the time period of "<<T<<" is "<<SI;
}