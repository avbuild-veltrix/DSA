// // Method - I = Using extra variable
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a, b, temp;
//     cin>>a>>b;
//     cout<<"Before swapping - "<<"A: "<<a<<" "<<"B: "<<b<<endl;
//     temp = a;
//     a = b;
//     b = temp;
//     cout<<"After swapping- "<<"A: "<<a<<" "<<" "<<"B: "<<b;
// }

// // Method-II = Using addition and subtraction
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a, b, temp;
//     cin>>a>>b;
//     cout<<"Before swapping - "<<"A: "<<a<<" "<<"B: "<<b<<endl;
//     a = a + b;
//     b = a - b;
//     a = a - b;
//     cout<<"After swapping- "<<"A: "<<a<<" "<<" "<<"B: "<<b;
// }

// // Method - III = Using Multiplication and division
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a, b, temp;
//     cin>>a>>b;
//     cout<<"Before swapping - "<<"A: "<<a<<" "<<"B: "<<b<<endl;
//     a = a * b;
//     b = a / b;
//     a = a / b;
//     cout<<"After swapping- "<<"A: "<<a<<" "<<" "<<"B: "<<b;
// }

// // Method - IV = Using XOR (Bitwise Operator)
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a,b;
//     cin>>a>>b;
//     cout<<"Before swapping - "<<"A: "<<a<<" "<<"B: "<<b<<endl;
//     a = a ^ b;
//     b = a ^ b;
//     a = a ^ b;
//     cout<<"After swapping- "<<"A: "<<a<<" "<<" "<<"B: "<<b;

// }

// // Method - V = Using built in swap function
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a,b;
//     cin>>a>>b;
//     cout<<"Before swapping - "<<"A: "<<a<<" "<<"B: "<<b<<endl;
//     swap(a,b);
//     cout<<"After swapping- "<<"A: "<<a<<" "<<" "<<"B: "<<b;

// }

// Method - VI = Using Alias
#include<bits/stdc++.h>
using namespace std;
void swapNum(int &a, int &b){
    if (a == b) 
        return; 
    a = a + b;
    b = a - b;
    a = a - b;

}
int main(){
    int a=20,b=10;
    cout<<"Before swapping - "<<"A: "<<a<<" "<<"B: "<<b<<endl;
    swapNum(a,b);
    cout<<"After swapping- "<<"A: "<<a<<" "<<" "<<"B: "<<b;

}