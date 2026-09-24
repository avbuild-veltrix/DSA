#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    // string s = to_string(n); // Time complexity is O(n);
    // cout<<"String is : "<<s;
    string s = "";
    while(n){
        int lastDigit = n % 10;
        char ch = lastDigit + 48;
        s.push_back(ch);
        n /= 10;
    }
    int i = 0, j = s.length()-1;
    while(i < j){
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
    cout<<"String is : "<<s;
}