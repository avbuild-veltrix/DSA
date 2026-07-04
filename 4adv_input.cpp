#include<iostream>
using namespace std;
int main(){
    string name;
    int age;
    
    cout <<"My age is ";
    cin>> age;
    cout<<"Hello, my age is " <<age<<endl;

    cin.ignore();

    cout<<"My name is ";
    getline(cin, name);
    cout<<"I'm "<< name << " and my age is "<< age;

    return 0;
}