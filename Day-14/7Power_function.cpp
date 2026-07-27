#include<bits/stdc++.h>
using namespace std;

void power(int base, int power = 2){
    int ans = 1;
    for(int i = 1; i <= power; i++){
        ans *= base;
    }
    cout<<ans<<endl;
}

int main(){
    power(5);
    power(5,3);
}