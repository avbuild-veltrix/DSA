#include<iostream>
using namespace std;

void minOfAB(int a, int b){
    if(a<b){
        cout<<a<<" is smaller";
    }else{
        cout<<b<<" is smaller";
    }
}

int main(){
    minOfAB(5,9);
}