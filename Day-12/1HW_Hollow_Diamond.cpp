// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the number: ";
//     cin >> n;

//     // Upper half
//     for (int i = 1; i <= n; i++) {

//         // Leading spaces
//         for (int j = 1; j <= n - i; j++)
//             cout << "  ";

//         // First star
//         cout << "* ";

//         // Inner spaces
//         if (i != 1) {
//             for (int j = 1; j <= 2 * i - 3; j++)
//                 cout << "  ";
//             cout << "* ";
//         }

//         cout << endl;
//     }

//     // Lower half
//     for (int i = n - 1; i >= 1; i--) {

//         // Leading spaces
//         for (int j = 1; j <= n - i; j++)
//             cout << "  ";

//         // First star
//         cout << "* ";

//         // Inner spaces
//         if (i != 1) {
//             for (int j = 1; j <= 2 * i - 3; j++)
//                 cout << "  ";
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
//     cout<<"Enter the integer number ";
//     cin>>n;

//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= n-i; j++){
//             cout<<"   ";
//         }
//         cout<<"*  ";
//         if(i != 1){
//             for(int j = 1; j <= 2*i-3; j++){
//                 cout<<"   ";
//             }
//         cout<<"*  ";
//         }
//         cout<<endl;
//     }
//     for(int i = n-1; i >= 1; i--){
//         for(int j = 1; j <= n-i; j++){
//             cout<<"   ";
//         }
//         cout<<"*  ";
//         if(i != 1){
//             for(int j = 1; j <= 2*i-3; j++){
//                 cout<<"   ";
//             }
//         cout<<"*  ";
//         }
//         cout<<endl;
//     }
// }

// Output will be-
// Enter the integer number 5
//             *  
//          *     *  
//       *           *  
//    *                 *  
// *                       *  
//    *                 *  
//       *           *  
//          *     *  
//             *  


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the integer number ";
    cin>>n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n-i; j++){
            cout<<"   ";
        }
        cout<<"*  ";
        if(i != 1){
            for(int j = 1; j <= 2*i-3; j++){
            cout<<"   ";
        }
        cout<<"*  ";
        }

        cout<<endl;
    }
    for(int i = n-1; i >= 1; i--){
        for(int j = 1; j <= n-i; j++){
            cout<<"   ";
        }
        cout<<"*  ";
        if(i != 1){
            for(int j = 1; j <= 2*i-3; j++){
            cout<<"   ";
        }
        cout<<"*  ";
        }

        cout<<endl;
    }
}