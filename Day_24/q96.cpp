// Write a program to Remove duplicate characters.
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string str = "programming";
    string result = "";

    for (char c : str) {
        if (result.find(c) == string::npos) {
            result += c;
        }
    }

    cout << "String after removing duplicates: " << result << endl;

    return 0;
}