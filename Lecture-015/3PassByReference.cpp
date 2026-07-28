// //Pass By Value
// #include<iostream>
// using namespace std;
// void change(int x){
//     x = 20;
// }
// int main(){
//     int x = 10;
//     change(20);
//     cout<<x<<endl;
// }

//Pass By Reference
#include<iostream>
using namespace std;
void change(int* ptr){
    *ptr = 20;
}
int main(){
    int x = 10;
    change(&x);
    cout<<x<<endl;
}