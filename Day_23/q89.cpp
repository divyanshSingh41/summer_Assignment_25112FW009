// Write a program to Find first non-repeating character.
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

char findFirstNonRepeating(const string& str) {
    unordered_map<char, int> charCount;
    
    for (char c : str) {
        charCount[c]++;
    }
   
    for (char c : str) {
        if (charCount[c] == 1) {
            return c;
        }
    }
    
    return '\0';
}

int main() {
    string str = "abccba";
    char result = findFirstNonRepeating(str);
    
    if (result != '\0') {
        cout << "First non-repeating character is: " << result << endl;
    } else {
        cout << "No non-repeating character found." << endl;
    }
    
    return 0;
}