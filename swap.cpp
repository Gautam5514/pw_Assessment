// Write a C++ program to swap two numbers with the help of a third variable.
#include <iostream>
using namespace std;
int main() {
    int n1 = 5;
    int n2 = 40;
    int n3;
    cout << "Swap the number before ";
    cout << n1 << " "<< n2 << " "<< endl;
    n3 = n2;
    n2 = n1;
    n1 = n3;
    
    cout << "This is the swap value " << endl;
    cout << n1 << " "<< n2 << " "<< endl;
    return 0;
}