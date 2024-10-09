 88#include <iostream>
#include <string>
using namespace std;
int main() {
    string input = "Hello World!";  
    string upper = input;
    for (size_t i = 0; i < upper.length(); ++i) {
        upper[i] = toupper(upper[i]);
    }
    string lower = input;
    for (size_t i = 0; i < lower.length(); ++i) {
        lower[i] = tolower(lower[i]);
    }
    cout << "Original: " << input << endl;
    cout << "Uppercase: " << upper << endl;
    cout << "Lowercase: " << lower << endl;
    return 0;
}
