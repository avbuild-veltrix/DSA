#include <bits/stdc++.h>
using namespace std;

bool isInvalid(char ch) {

    if(ch >= 65 && ch <= 90) {
        return false;
    }
    else if(ch >= 97 && ch <= 122) {
        return false;
    }
    else if(ch >= 48 && ch <= 57) {
        return false;
    }
    else {
        return true;
    }
}

int main() {

    string s;

    cout << "Enter the string: ";
    getline(cin, s);

    int i = 0;
    int j = s.length() - 1;

    while(i < j) {

        if(isInvalid(s[i])) {
            i++;
            continue;
        }

        if(isInvalid(s[j])) {
            j--;
            continue;
        }

        char x = s[i];
        char y = s[j];

        // Convert uppercase to lowercase
        if(x >= 'A' && x <= 'Z') {
            x += 32;
        }

        if(y >= 'A' && y <= 'Z') {
            y += 32;
        }

        if(x != y) {
            cout << "Not a palindrome";
            return 0;
        }

        i++;
        j--;
    }

    cout << "Palindrome";

    return 0;
}