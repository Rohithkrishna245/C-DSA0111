#include <iostream>
using namespace std;
int main() {
    int n = 25;
    cout << "Perfect numbers up to " << n << ": ";
    for (int num = 1; num <= n; num++) {
        int sum = 0;
        for (int i = 1; i <= num / 2; i++) {
            if (num % i == 0) sum += i; 
        }
        if (sum == num) cout << num << " "; 
    }
    return 0;
}
