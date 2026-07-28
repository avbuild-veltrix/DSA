//Pass By Value
#include<iostream>
using namespace std;
void change(int x){
    x = 20;
}
int main(){
    int x = 10;
    change(10);
    cout<<x<<endl;
}