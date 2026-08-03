// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[] = {1,2,3,14,5,6,7,8,9};
//     int size = sizeof(arr)/sizeof(arr[1]);
//     int maxElement = arr[1];
//     for(int i = 0; i <= size; i++){
//         if(arr[i] > maxElement){
//             maxElement = arr[i];
//         }
//     }
//     cout<<"Maximum element is : "<<maxElement;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[] = {-1,-2,-3,-14,-5,-6,-7,-8,-9};
//     int size = sizeof(arr)/sizeof(arr[1]);
//     int maxElement = arr[0];
//     for(int i = 0; i < size; i++){
//         if(arr[i] > maxElement){
//             maxElement = arr[i];
//         }
//     }
//     cout<<"Maximum element is : "<<maxElement;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {-1,-2,-3,-14,-5,-6,-7,-8,-9};
    int size = sizeof(arr)/sizeof(arr[1]);
    int maxElement = INT_MIN;               //INT_MIN is smallest possibe value.
    for(int i = 0; i < size; i++){
        if(arr[i] > maxElement){
            maxElement = arr[i];
        }
    }
    cout<<"Maximum element is : "<<maxElement;
}