// Write a program to check whether two numbers (entered by user) are equal or not.

// #include <iostream>
// using namespace std;
// int main() {
//     int x;
//     int y;
//     cin >> x >> y;

//     cout << (x == y) ? 1 : 0;
//     return 0;
    
// }

#include <iostream>
using namespace std;
int main() {
    int x;
    int y;
    cin >> x >> y;
    if(x == y) {
        cout << "This is equal number ";
    } else {
        cout << "This is not Equal number ";
    }
    return 0;
}