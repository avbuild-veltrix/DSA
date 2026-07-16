// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"Enter the number of rows and column ";
//     cin>>a;
//     bool c = false;
//     bool d = true;

//     bool result1 = d;
//     bool result2 = c;
//     for(int i = 1; i <= a; i++){
//         for(int j = 1; j <= i; j++){
//             if(i%2!=0){
//                 cout<<result1<<"  ";
//                 result1 = !result1;
//             }else if(i%2==0){
//                 cout<<result2<<"  ";
//                 result2 = !result2 ;
//             }else{
//                 cout<<"   ";
//             }
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int a;
//     cout << "Enter the number of rows: ";
//     cin >> a;

//     for(int i = 1; i <= a; i++) {

//         bool value = (i % 2 != 0);   // odd row starts with 1, even row starts with 0

//         for(int j = 1; j <= i; j++) {
//             cout << value << " ";
//             value = !value;          // toggle 1 ↔ 0
//         }

//         cout << endl;
//     }
// }

//Right Method

// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"Enter the number of rows and columns ";
//     cin>>a;

//     for(int i = 1; i <= a; i++){

//         bool value = (i%2 != 0);
//         for(int j =1; j <= i; j++){
//             cout<<value<<"  ";
//             value = !value;
//         }
//         cout<<endl;
//     }

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"Enter the number of rows and columns ";
//     cin>>a;

//     for(int i = 1; i <= a; i++){
//         for(int j = 1; j <= i; j++){
//             if((i+j)%2==0){
//                 cout<<1<<"  ";
//             }else{
//                 cout<<0<<"  ";
//             }
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"Enter the number of rows and columns ";
//     cin>>a;

//     for(int i = 1; i <= a; i++){
//         for(int j = 1; j <= i; j++){
//             if(i%2 == 1){
//                 if(j%2 == 1){
//                     cout<<1<<"  ";
//                 }else{
//                     cout<<0<<"  ";
//                 }
//             }else{
//                 if(i%2 == 1){
//                     cout<<0<<"  ";
//                 }else{
//                     cout<<1<<"  ";
//                 }
//             }
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"Enter the number of rows and columns ";
//     cin>>a;

//     for(int i = 1; i <= a; i++){

//         bool value = (i%2 != 0);
//         for(int j = 1; j <= i; j++){
//             cout<<value<<"  ";
//             value = !value;
//         }
//         cout<<endl;
//     }
// }

#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number of rows and columns ";
    cin>>a;

    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= i; j++){
            if((i+j)%2 == 0){
                cout<<1<<"  ";
            }else{
                cout<<0<<"  ";
            }
        }
        cout<<endl;
    }
}