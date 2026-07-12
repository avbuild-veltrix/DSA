//Print the factors of a number
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number ";
    cin>>num;
    cout<<"The factors of the number: ";
    for(int i =1;i<=num;i++){
        if(num%i==0){
            cout<<i<<",";
        }else{
            continue;
        }
    }
    cout<<endl<<endl;


    cout<<"The factors of the number: ";
    for(int i = 1; i <= sqrt(num); i++){
        if(num%i==0){
        cout<<i<<" "<<num/i<<endl;
        }
    }
}