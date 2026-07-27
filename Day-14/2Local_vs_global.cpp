#include<bits/stdc++.h>
using namespace std;
int x = 10;

void change(){
    x = 30;
}
int main(){
    int x = 20;
    cout<<x<<endl;
    change();
    cout<<x<<endl;
}