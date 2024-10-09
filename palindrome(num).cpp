#include <iostream>
using namespace std;
int main() {
    int number = 41;  
    int rev = 0;
    int temp = number; 
    while (temp > 0) {
        int digit = temp % 10;
        rev = rev * 10 + digit;
        temp = temp / 10;
    }
    if (number == rev) {
        cout << number << " is a palindrome." << endl;
    } else {
        cout << number << " is not a palindrome." << endl;
    }
    return 0;
}

