#include<bits/stdc++.h>
using namespace std;

void kartik(int count){
    count++;
    cout<<"Kartik - "<<count<<endl;
    if(count == 10){
        return;
    }
    kartik(count);
}

int main(){
    int count = 0;
    cout<<"Avinash Kumar"<<endl;
    kartik(count);
    return 0;
}