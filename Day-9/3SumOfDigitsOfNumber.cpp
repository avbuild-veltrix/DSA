#include<iostream>
using namespace std;
int main(){
    int x, sum = 0,remainder;
    cout<<"Enter the number ";
    cin>>x;
    while(x != 0){
    remainder = (x%10);
    sum += remainder;
    x/=10;
    }
    cout<<"Sum of digits of a number = "<<sum;

}