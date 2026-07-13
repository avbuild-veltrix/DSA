#include<iostream>
using namespace std;
int main(){
    long long x, fact=1;
    cout<<"Enter the number ";
    cin>>x;

    for(int i =1; i<=x;i++){
        fact *= i;
    }
    cout<<fact;

}