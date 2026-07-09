#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number ";
    cin>>x;
    if((x>999)&&(x<10000)){
        cout<<"It is four digit number";
    }else{
        cout<<"It is not four digit number";
    }
}