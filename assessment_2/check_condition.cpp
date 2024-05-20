// Write a program to take the values of two variables a and b from the keyboard and then check if
// both the conditions 'a < 50' and 'a < b' are true.
#include <iostream>
using namespace std;
int main() {
    int x;
    int y;
    cin >> x >> y;
    cout << ((x < 50) && (x < y)) ? 1 : 0;
    return 0; 
}