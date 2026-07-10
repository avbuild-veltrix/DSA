#include<iostream>
using namespace std;
int main(){
    int a=0,b=9,c=98;
    string result = (a>b)
                         ?((a>c)?"A is greater":"C is greater")
                         :((b>c)?"B is greater":"C is greater");

cout << result;

    return 0;}