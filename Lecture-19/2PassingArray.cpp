#include<bits/stdc++.h>
using namespace std;

void change(int y[]){
    y[0] = 20;
}

int main(){
    int x[] = {1,2,3};
    change(x); //It will send the address of the array. and it name become y also no new array is being created
    cout<<x[0];
}