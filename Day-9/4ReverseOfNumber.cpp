#include<iostream>
using namespace std;
int main(){
    int rev = 0, x, remainder;
    cout<<"Enter the number ";
    cin>>x;

    while(x != 0){
        rev *= 10;
        remainder = x%10;
        rev += remainder;
        x/=10;
    }
    cout<<"The reverse of the number is "<<rev;
}