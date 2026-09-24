#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string : ";
    getline(cin, s);
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= 65 && s[i] <= 90){
            s[i] = s[i] + 32;
        }else if(s[i] >= 97 && s[i] <= 122){
            s[i] = s[i] - 32;
        }else{
            continue;
        }
    }
    cout<<"The string after toggling is "<<s;
}