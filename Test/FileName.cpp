#include <string>
#include <cctype>
using namespace std;

bool validatePassword(const string* password) {
    if (password == nullptr) {
        return false;
    }
    if (password->length() < 8) {
        return false;
    }
    bool hasDigit = false;
    bool hasUpper = false;

    int i = 0;
    while (i < password->length()) {
        char ch = (*password)[i];
        if (ch == ' ') {
            return false;
        }
        if (isdigit(ch)) {
            hasDigit = true;
        }
        if (isupper(ch)) {
            hasUpper = true;
        }
        ++i;
    }

    return hasDigit && hasUpper;
}