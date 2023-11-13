#include <iostream>
#include "str_lib.h"

using namespace std;

int main() {
    char str1[50] = "Hello, ";
    const char* str2 = "World!";
    char searchChar = 'o';
    const char* searchStr = "lo";

    int choice;
    cout << "Choose a function to test:\n";
    cout << "1. mystrcat\n";
    cout << "2. mystrchr\n";
    cout << "3. mystrstr\n";
    cin >> choice;

    switch (choice) {
    case 1: {
        mystrcat(str1, str2);
        cout << "Concatenated string: " << str1 << endl;
        break;
    }
    case 2: {
        char* charResult = mystrchr(str1, searchChar);
        if (charResult != nullptr)
            cout << "Found character '" << searchChar << "' at position: " << charResult - str1 << endl;
        else
            cout << "Character '" << searchChar << "' not found." << endl;
        break;
    }
    case 3: {
        const char* strResult = mystrstr(str1, searchStr);
        if (strResult != nullptr)
            cout << "Found substring '" << searchStr << "' at position: " << strResult - str1 << endl;
        else
            cout << "Substring '" << searchStr << "' not found." << endl;
        break;
    }
    default:
        cout << "Invalid choice." << endl;
    }

    return 0;
}