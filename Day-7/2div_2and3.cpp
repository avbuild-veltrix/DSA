#include<iostream>
using namespace std;
int main(){
    cout<<"Numbers that are divisible by 2 and 3 are "<<endl;
    for(int i =1; i<100;i++){
        if(i%2==0 && i%3==0){
            cout<<i<<" ";
        }
    }

    cout<<endl<<endl<<"Numbers that are divisible by 3 and modulo of that number by 2 is 1 are "<<endl;

    for(int i =1;i<100;i++){
        if(i%2==1 && i%3==0){
            cout<<i<<" ";
        }
    }
}