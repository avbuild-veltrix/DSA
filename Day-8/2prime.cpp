//Print an number and tell that number is prime or not
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num;
    // bool isPrime = true;
    cout<<"Enter the number ";
    cin>>num;

    // if(num <= 1){
    //     isPrime = false;
    // }
    // else{
    //     for(int i = 2; i < num; i++){
    //     if(num%i == 0){
    //         isPrime = false;
    //         break;
    //     }
    // }

    // if(isPrime == true){
    //     cout<<num<<" is Prime Number";
    // }else{
    //     cout<<num<<" is a Composite Number";
    // }
    // }

    int factors = 0;
    cout<<"The factors of the number: ";
    if(num == 1){
        cout<<"Neither Prime nor Composite";
        return 0;
    }

    for(int i = 2; i <= sqrt(num); i++){
        if(num%i==0){
        cout<<i<<" "<<endl;
        factors+=2;
        }
        if(num%i!=0){
            cout<<num/i<<" "<<endl;
            factors +=1;
        }
        
    }
    if(factors>2){
        cout<<"Composite numbers";
    }else{
        cout<<"Prime Numbers";
    }
    
}