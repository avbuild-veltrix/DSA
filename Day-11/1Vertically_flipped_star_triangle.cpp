// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows and columns ";
//     cin>>n;

//     for(int i = 1; i <= n; i++){
//         for(int j =1; j <= n; j++){
//             if((i+j)%2 != 0){
//                 cout << "   ";
//             }else{
//                 cout<<"*  ";
//             }
//         }
//         cout<<endl;
//     }
// }
//Output will be
// *     *     *
//    *     *
// *     *     *
//    *     *
// *     *     *  

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows and columns ";
//     cin>>n;

//     for(int i = 1; i <= n; i++){
//         for(int j =1; j <= n; j++){
//             if((i+j)%2 == 0){
//                 cout << "   ";
//             }else{
//                 cout<<"*  ";
//             }
//         }
//         cout<<endl;
//     }
// }

// Output will be
//    *     *     
// *     *     *  
//    *     *     
// *     *     *  
//    *     *   


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows and columns ";
//     cin>>n;

//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= n; j++){
//             if(j <= n - i){
//                 cout<<"   ";
//             }else{
//                 cout<<"*  ";
//             }
//         }
//         cout<<endl;
//     }
// }

// Output will be
//             *  
//          *  *  
//       *  *  *  
//    *  *  *  *  
// *  *  *  *  *

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows and columns ";
//     cin>>n;

//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= n; j++){
//             if(j+i <= n){
//                 cout<<"   ";
//             }else{
//                 cout<<"*  ";
//             }
//         }
//         cout<<endl;
//     }
// }

// Output will be
//             *  
//          *  *  
//       *  *  *  
//    *  *  *  *  
// *  *  *  *  *


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows and columns ";
//     cin>>n;

//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= n; j++){
//             if(j+i > n){
//                 cout<<"*  ";
//             }else{
//                 cout<<"   ";
//             }
//         }
//         cout<<endl;
//     }
// }

// Output will be
//             *  
//          *  *  
//       *  *  *  
//    *  *  *  *  
// *  *  *  *  *



// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number of rows and columns ";
//     cin>>n;
//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= n-i; j++){
//             cout<<"   ";
//         }
//         for(int j = 1; j <= i; j++){
//             cout<<"*  ";
//         }
//         cout<<endl;
//     }
// }


// Output will be
//             *  
//          *  *  
//       *  *  *  
//    *  *  *  *  
// *  *  *  *  *




// #include<iostream>
// using namespace std;
// int main(){
//     int n; 
//     cout<<" Enter the number of rows and columns ";
//     cin>>n;

//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= n-i; j++){
//             cout<<"   ";
//         }
//         for(int j = 1; j <= i; j++){
//             cout<<"*  ";
//         }
//         cout<<endl;
//     }
// }



// Output will be
//             *  
//          *  *  
//       *  *  *  
//    *  *  *  *  
// *  *  *  *  *

#include<iostream>
using namespace std;
int main(){
    int n; 
    cout<<" Enter the number of rows and columns ";
    cin>>n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout<<j<<"  ";
        }
        cout<<endl;
    }
}