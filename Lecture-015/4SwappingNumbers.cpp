// Swapping Using Pass By Value
// #include<iostream>
// using namespace std;
// void swapping(int x, int y){
//     x = x + y;
//     y = x - y;
//     x = x - y;
    
//     cout << "After swapping:" << endl;
//     cout << "x = " << x << endl;
//     cout << "y = " << y << endl;
// }

// int main(){
//     swapping(10,20);
// }

// Swapping Using Pass By Reference
#include<iostream>
using namespace std;
void swapping(int* x, int* y){
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
    
    cout << "After swapping:" << endl;
    cout << "x = " << *x << endl;
    cout << "y = " << *y << endl;
}

int main(){
    int x = 10, y = 20;
    cout<<"Before Swapping: "<<endl<<"x = "<<x<<endl<<"y = "<<y<<endl;
    swapping(&x,&y);
}