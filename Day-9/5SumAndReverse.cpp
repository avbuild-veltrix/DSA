#include<iostream>
using namespace std;
int main(){
    int rev = 0, num, x, remainder, sum = 0;
    cout<<"Enter the number ";
    cin>>x;

    num = x;
    while(x != 0){
        rev *= 10;
        remainder = x%10;
        sum += remainder;
        rev += remainder;
        x/=10;
    }
    cout<<"The reverse of the number is "<<rev<<endl;
    cout<<"The sum of the number and its reverse is "<<rev+num;
}