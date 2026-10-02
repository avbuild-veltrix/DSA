#include<bits/stdc++.h>
using namespace std;
void indar(){
    cout<<"ABC"<<endl;
};
void kartik(){
    cout<<"Kartik"<<endl;
    indar();
}

void Indar(){
    cout<<"Indar"<<endl;
    kartik();
}

int main(){
    cout<<"Indar"<<endl;
    kartik();
    Indar();
    return 0;
}