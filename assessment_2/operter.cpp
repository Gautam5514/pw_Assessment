// Design a calculator to perform basic arithmetic operations (+,-,/,*)
#include <iostream>
using namespace std;
int main() {
    float num1, num2;
    cin >> num1 >> num2;
    cout << "Sum is" << num1 + num2 << endl;
    cout << "Sub is" << num1 - num2 << endl;
    cout << "Multiplication is " << num1 * num2 << endl;
    cout << "Divisible is " << num1 / num2 << endl;
    return 0;
}