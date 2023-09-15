#include <iostream>
#include <string>

// Case sensitivity
char tolowercase(char ch) {
    char temp;

    if (ch >= 'a' && ch <= 'z') {
        return ch;
    } else {
        temp = ch - 'A' + 'a';
        return temp;
    }
}

// Valid character
bool valid(char ch) {
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
        return true;
    }
    return false;
}

// Palindrome
bool checkPalindrome(std::string s) {
    int n = s.size();
    int st = 0;
    int e = n - 1;

    while (st <= e) {
        if (!valid(s[st])) {
            st++;
        } else if (!valid(s[e])) {
            e--;
        } else if (tolowercase(s[st]) != tolowercase(s[e])) {
            return false;
        } else {
            st++;
            e--;
        }
    }
    return true;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    if (checkPalindrome(input)) {
        std::cout << "Palindrome" << std::endl;
    } else {
        std::cout << "Not a palindrome" << std::endl;
    }

    return 0;
}
