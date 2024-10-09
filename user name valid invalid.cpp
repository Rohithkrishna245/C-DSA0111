#include <iostream>
using namespace std;
bool isValidUsername(string username) {
    return (username.length() >= 3 && username.length() <= 15);
}
int main() {
    string username = "user123"; 
    if (isValidUsername(username)) {
        cout << "The username \"" << username << "\" is valid." << endl;
    } else {
        cout << "The username \"" << username << "\" is invalid." << endl;
    }

    return 0;
}
