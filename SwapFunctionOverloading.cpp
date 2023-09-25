#include <iostream>
using namespace std;
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
void swap(double &a, double &b) {
    double temp = a;
    a = b;
    b = temp;
}
void swap(char &a, char &b) {
    char temp = a;
    a = b;
    b = temp;
}
int main() {
    int int1 = 5, int2 = 10;
    double double1 = 3.14, double2 = 6.28;
    char char1 = 'A', char2 = 'B';
    cout << "Before swapping:" << endl;
    cout << "int1: " << int1 << " int2: " << int2 << endl;
    cout << "double1: " << double1 << " double2: " << double2 << endl;
    cout << "char1: " << char1 << " char2: " << char2 << endl;
    swap(int1, int2);
    swap(double1, double2);
    swap(char1, char2);
    cout << "\nAfter swapping:" << endl;
    cout << "int1: " << int1 << " int2: " << int2 << endl;
    cout << "double1: " << double1 << " double2: " << double2 << endl;
    cout << "char1: " << char1 << " char2: " << char2 << endl;
    
    return 0;
}
