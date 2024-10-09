#include <iostream>
using namespace std;
int main() {
    int n = 25, num = 1; 
    cout << "Perfect numbers up to " << n << ": ";

    while (num <= n) {
        int sum = 0, i = 1;
        while (i <= num / 2) {
            if (num % i == 0) sum += i; 
            i++;
        }
        if (sum == num) cout << num << " "; 
        num++;
    }
    return 0;
}

