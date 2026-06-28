// Write a program to Find first repeating character.
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

char findFirstRepeating(const string& str) {
    unordered_map<char, int> charCount;
    
    for (char c : str) {
        charCount[c]++;
        if (charCount[c] > 1) {
            return c;
        }
    }
    
    return '\0';
}

int main() {
    string str = "abccba";
    char result = findFirstRepeating(str);
    
    if (result != '\0') {
        cout << "First repeating character is: " << result << endl;
    } else {
        cout << "No repeating character found." << endl;
    }
    
    return 0;
}