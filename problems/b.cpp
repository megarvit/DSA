#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to find the factorial of a number
int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

// Function to find the string given its rank and length
string findString(int rank, int length) {
    string result;
    vector<char> characters;

    // Populate the characters vector with all the alphabets
    for (char ch = 'a'; ch <= 'z'; ++ch) {
        characters.push_back(ch);
    }

    // Decrement rank to make it compatible with zero-based indexing
    --rank;

    // Iterate through each position in the string
    for (int i = 0; i < length; ++i) {
        // Calculate the index of the character to be placed at the current position
        int index = rank / factorial(length - i - 1);
        result.push_back(characters[index]);

        // Update rank for the next iteration
        rank = rank % factorial(length - i - 1);

        // Erase the selected character from the characters vector
        characters.erase(characters.begin() + index);
    }

    return result;
}

int main() {
    // Input
    int rank, length;
    cin >> rank;
    cin >> length;

    // Find and display the result
    string result = findString(rank, length);
    cout <<  result << endl;

    return 0;
}
