#include<bits/stdc++.h>
using namespace std;
void swapNum(int &a, int &b){
    if (a == b) 
        return 
    a = a + b;
    b = a - b;
    a = a - b;

}
int main(){
    int a=20,b=10;
    cout<<"Before swapping - "<<"A: "<<a<<" "<<"B: "<<b<<endl;
    swapNum(a,b);
    cout<<"After swapping- "<<"A: "<<a<<" "<<" "<<"B: "<<b;

}