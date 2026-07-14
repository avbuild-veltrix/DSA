// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"Enter the number of rows ";
//     cin>>a;
//     cout<<"Enter the numver of columns ";
//     cin>>b;

//     for(int i = 1; i <= a; i++){
//         for(int j = 1; j <= b; j++){
//             if(i == 1){
//                 cout<<"*  ";
//             }else if( i == a){
//                 cout<<"*  ";
//             }else if(j == 1){
//                 cout<<"*  ";
//             }else if(j == b){
//                 cout<<"*  ";
//             }else{
//                 cout<<"   ";
//             }
//         }
//         cout<<endl;
//     }
// }


#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the number of rows ";
    cin>>a;
    cout<<"Enter the number od columns ";
    cin>>b;

    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= b; j++){
            if(i == 1 || i == a || j == 1 || j == b){
                cout<<"*  ";
            }else{
                cout<<"   ";
            }
        }
        cout<<endl;
    }
}