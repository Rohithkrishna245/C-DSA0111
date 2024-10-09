#include <iostream>
using namespace std;

int main() {
    int n = 10; 
    int sum = 0;
    int i = 1;  
    while (i <= n) {
        sum += i; 
        i++;      
    }
    cout << "The sum of the first " << n << " natural numbers is " << sum << endl;

    return 0;
}

