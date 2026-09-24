#include<bits./stdc++.h>
using namespace std;
int main(){
    string s = "Kartik";
    string sub = s.substr(0,4); // 0 to length 4
    cout<<sub<<endl;

    string s1 = " Kartik";
    string sub1 = s1.substr(1,4); // 1 to length 4
    cout<<sub1<<endl;
    cout<<s1.substr(1)<<endl; // 1 to length end

}