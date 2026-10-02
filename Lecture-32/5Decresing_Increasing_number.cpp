#include<bits/stdc++.h>
using namespace std;

void decreasing(int n){
    if(n == 0){
        return;
    }

    cout << n << " ";
    decreasing(n - 1);
}

void increasing(int n){
    if(n == 1){
        return;
    }

    increasing(n - 1);
    cout << n << " ";
}

int main(){
    int n;

    cout << "Enter the number : ";
    cin >> n;

    cout << "The number sequence will be : ";

    decreasing(n);
    increasing(n);

    return 0;
}