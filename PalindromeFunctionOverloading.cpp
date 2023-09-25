#include <iostream>
#include <string>
using namespace std;
bool isPalindrome(string str) {
    for(int i=0; i<str.length(); i++){
      if(str[i]!=str[str.length()-i-1]){
        return false;
      }
    }
    return true;
}
bool isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;
    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }
    return originalNum == reversedNum;
}
int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    if (isPalindrome(str)) {
        cout << "The entered string is a palindrome." << endl;
    } else {
        cout << "The entered string is not a palindrome." << endl;
    }
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isPalindrome(num)) {
        cout << "The entered number is a palindrome." << endl;
    } else {
        cout << "The entered number is not a palindrome." << endl;
    }
    return 0;
}
