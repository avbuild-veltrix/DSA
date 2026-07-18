// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows and columns ";
//     cin>>n;

//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= n-i; j++){
//             cout << "   ";
//         }
//         int b = 1;
//         for(int j = 1; j <= i; j++){
//             cout<<b<<"  ";
//             b++;
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

//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= n-i; j++){
//             cout << "   ";
//         }
//         for(int j = 1; j <= i; j++){
//             cout<<j<<"  ";
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

//     for(int i = 1; i <= n; i++){
//         int value = 1;
//         for(int j = 1; j <= n; j++){
//             cout<<value<<"  ";
//             value = value + 1;
//         }
//         cout<<endl;
//     }
// }
// Output will be
// 1  2  3  4  5  
// 1  2  3  4  5  
// 1  2  3  4  5  
// 1  2  3  4  5  
// 1  2  3  4  5 

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows and columns ";
    cin>>n;

    for(int i = 1; i <= n; i++){
        int value = 1;
        for(int j = 1; j <= i; j++){
            cout<<value<<"  ";
            value = value + 1;
        }
        cout<<endl;
    }
}
// Output will be
// 1  
// 1  2  
// 1  2  3  
// 1  2  3  4  
// 1  2  3  4  5  