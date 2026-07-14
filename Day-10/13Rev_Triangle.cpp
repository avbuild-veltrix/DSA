// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows ";
//     cin>>n;

//     for(int i = n; i > 0; i--){
//         for(int j = 1; j <= i; j++){
//             cout<<"*  ";
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows ";
//     cin>>n;

//     for(int i = n; i > 0; i--){
//         for(int j = i; j > 0; j){
//             cout<<"*  ";
//         }
//         cout<<endl;
//     }
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows ";
    cin>>n;
    int a = n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= a; j++){
            cout<<"*  ";
        }
        a--;
        cout<<endl;
    }
}