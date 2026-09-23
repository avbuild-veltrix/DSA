#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string : ";
    getline(cin, s);
    int i = 0; 
    int j = s.length()/2 - 1;
    while(i != j){
        char ch = s[i];
        s[i] = s[j];
        s[j] = ch;
        i++;
        j--;
    }
    cout<<"The string after reversing half is : "<< s;
}