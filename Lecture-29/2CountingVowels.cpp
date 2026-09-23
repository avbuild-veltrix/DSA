#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;

    cout << "Enter the string: ";
    getline(cin, s);

    int count = 0;

    // for(int i = 0; i < s.length(); i++) {
    //     if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||
    //        s[i] == 'o' || s[i] == 'u') {
    //         count++;
    //     }
    // }
    for(char ch : s) {
    if(s.find(ch) != string::npos) {
        count++;
        }
    }

    cout << "The total number of vowels in the string is: " << count;

    return 0;
}