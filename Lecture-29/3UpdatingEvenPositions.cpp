#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string : ";
    getline(cin, s);
    for(int i = 0; i < s.length(); i++){
        if(i % 2 == 0){
            s[i] = 'A';
        }
    }
    cout<<"String after nupdating even positions is : "<<s;
}