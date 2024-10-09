#include <iostream>
using namespace std;
int main() {
    int number = 17;
    bool isPrime = true;
    if (number <= 1) isPrime = false;
    else for (int i = 2; i * i <= number; ++i)
        if (number % i == 0) isPrime = false;
    cout << number << (isPrime ? " is a prime number." : " is not a prime number.") << endl;
    return 0;
}
