#include<iostream>
using namespace std;
int main(){
    float num;
    cout<<"Enter the number ";
    cin>>num;

    if(num == (int)num){
        cout<<"The number is Integer Number";
    }
    else{cout<<"The number is Real Number";}
    
}