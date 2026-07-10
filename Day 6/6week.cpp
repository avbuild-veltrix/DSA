#include<iostream>
using namespace std;

int main() {
    int i;

    cout << "Enter the number: ";
    cin >> i;

    if (i%7 == 1){cout << "Monday";}
        
    else if (i%7 == 2){
        cout << "Tuesday";}
    else if (i%7 == 3){
        cout << "Wednesday";}
    else if (i%7 == 4){
        cout << "Thursday";}
    else if (i%7 == 5){
        cout << "Friday";}
    else if (i%7 == 6){
        cout << "Saturday";}
    else{
        cout << "Sunday";}
    
    return 0;

}