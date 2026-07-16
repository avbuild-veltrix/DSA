// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"Enter the number of rows and columns ";
//     cin>>a;

//     for(int i = 1; i <= a; i++){
//         for(int j = 1; j <= a-i; j++){
//             cout << "  ";
//         }
//         for(int j = 1; j <= i; j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the number of rows and columns ";
//     cin >> n;

//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= n; j++){
//             if(j <= n-i){
//                 cout << "   ";
//             }else{
//                 cout << "*  ";
//             }
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows and columns ";
//     cin>>n;

//     for(int i = 1; i <= n; i++) {
//         for(int j = 1; j <= n; j++) {

//             if(j > n - i)
//                 cout << "* ";
//             else
//                 cout << "  ";
//         }
//         cout << endl;
//     }
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows and columns ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if((i+j) > n){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}