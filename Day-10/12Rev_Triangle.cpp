// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"Enter the number of rows ";
//     cin>>a;

//     for(int i = 1; i <= a; i++){
//         for(int j = 0; j <= a - i; j++){
//             cout<<"*  ";
//         }
//         cout<<endl;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"Enter the number of rows ";
//     cin>>a;

//     for(int i = 1; i <= a; i++){
//         for(int j = 0; j <= a - i; j++){
//             cout<<(char)('A' + j)<<" ";
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"Enter the number of rows ";
//     cin>>a;

//     for(int i = 1; i <= a; i++){
//         for(int j = 0; j <= a-i; j++){
//             cout<<(char)('A' + i - 1)<<"  ";
//         }
//         cout<<endl;
//     }
// }

#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number of rows ";
    cin>>a;

    for(int i = 0; i < a; i++){
        for(int j = 0; j < a-i  ; j++){
            if(i%2==0){
                cout<<(char)('a' + i)<<"  ";
            }else if(i%2 != 0){
                cout<<(char)('A' + i)<<"  ";
            }
        }
        cout<<endl;
    }
}