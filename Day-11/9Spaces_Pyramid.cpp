// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for (int i = 1; i <= n; i++) {

//         // Left stars
//         for (int j = 1; j <= n - i + 1; j++) {
//             cout << "* ";
//         }

//         // Middle spaces
//         for (int j = 1; j <= 2 * (i - 1); j++) {
//             cout << "  ";
//         }

//         // Right stars
//         for (int j = 1; j <= n - i + 1; j++) {
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
//         // Left stars
//         for (int j = 1; j <= n - i + 1; j++)
//             cout << "* ";

//         // Middle spaces
//         for (int j = 1; j <= 2 * (i - 1); j++)
//             cout << "  ";

//         // Right stars
//         for (int j = 1; j <= n - i; j++)
//             cout << "* ";       
//         cout<<endl;
//     }
// }

// Enter the integer number 5
// *  *  *  *  *  *  *  *  *
// *  *  *  *     *  *  *  *
// *  *  *           *  *  *
// *  *                 *  *
// *                       *





// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for (int i = 1; i <= n; i++) {

//         int leftStars, rightStars;

//         if (i == 1) {
//             leftStars = n;
//             rightStars = n - 1;
//         } else {
//             leftStars = n - i + 1;
//             rightStars = n - i + 1;
//         }

//         // Left stars
//         for (int j = 1; j <= leftStars; j++)
//             cout << "* ";

//         // Middle gap
//         for (int j = 1; j <= 2 * i - 3; j++)
//             cout << "  ";

//         // Right stars
//         for (int j = 1; j <= rightStars; j++)
//             cout << "* ";

//         cout << endl;
//     }

//     return 0;
// }

// Output will be-
// 5
// * * * * * * * * * 
// * * * *   * * * * 
// * * *       * * * 
// * *           * * 
// *               * 





#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the integer number ";
    cin>>n;

    int LeftStars, RightStars;
    for(int i = 1; i <= n; i++){
        if(i == 1){
            LeftStars = n;
            RightStars = n-1;
        }else{
            RightStars = n-i+1;
            LeftStars = n-i+1;
        }
        for(int j = 1; j <= LeftStars; j++){
            cout<<"*  ";
        }
        for(int j = 1; j <= 2*i-3;j++){
            cout<<"   ";
        }for(int j = 1; j <= RightStars; j++){
            cout<<"*  ";
        }
        cout<<endl;
    }
}