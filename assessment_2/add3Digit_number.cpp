// write a program to calculate the sum of digits of a 3 digit number.
#include <iostream>
using namespace std;
int main() {
    int n, sum, first, second, third;
    cin >> n;
    first = n / 100;
    n = n % 100;
    second = n / 10;
    third = n % 10;
    sum = first + second + third;
    cout << "Sum of three digit number " << sum << endl;
    return 0;
}