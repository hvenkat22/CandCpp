#include <iostream>
using namespace std;
class Rational {
private:
    int numerator;
    int denominator;
public:
    Rational(int num, int denom){
      numerator=num;
      denominator=denom;
    }
    Rational operator+(Rational other) {
        int newNumerator = numerator * other.denominator + other.numerator * denominator;
        int newDenominator = denominator * other.denominator;
        return Rational(newNumerator, newDenominator);
    }
    Rational operator-(Rational other) {
        int newNumerator = numerator * other.denominator - other.numerator * denominator;
        int newDenominator = denominator * other.denominator;
        return Rational(newNumerator, newDenominator);
    }
    Rational operator*(Rational other) {
        int newNumerator = numerator * other.numerator;
        int newDenominator = denominator * other.denominator;
        return Rational(newNumerator, newDenominator);
    }
    Rational operator/(Rational other){
        int newNumerator = numerator * other.denominator;
        int newDenominator = denominator * other.numerator;
        return Rational(newNumerator, newDenominator);
    }
    void display() const {
        cout << numerator << "/" << denominator;
    }
};
int main() {
    int r1n,r1d,r2n,r2d;
    cout<<"Enter first rational number numerator and denominator: ";
    cin>>r1n>>r1d;
    cout<<"Enter the second rational number numerator and denominator: ";
    cin>>r2n>>r2d;
    Rational r1(r1n,r1d),r2(r2n,r2d);
    Rational sum = r1 + r2;
    Rational difference = r1 - r2;
    Rational product = r1 * r2;
    Rational quotient = r1 / r2;
    cout << "r1: ";
    r1.display();
    cout << std::endl;
    cout << "r2: ";
    r2.display();
    cout << std::endl;
    cout << "Sum: ";
    sum.display();
    cout << std::endl;
    cout << "Difference: ";
    difference.display();
    cout << std::endl;
    cout << "Product: ";
    product.display();
    cout << std::endl;
    cout << "Quotient: ";
    quotient.display();
    cout << std::endl;
    return 0;
}
