#include <iostream>
#include "str_lib.h"

using namespace std;

int main() {
    const char* str1 = "Hello";
    const char* str2 = "World";

    int cmpResult = mystrcmp(str1, str2);
    cout << "Comparison result: " << cmpResult << endl;

    char strNumber[] = "12345";
    int num = StringToNumber(strNumber);
    cout << "String to Number: " << num << endl;

    int number = 98765;
    char* strFromNumber = NumberToString(number);
    cout << "Number to String: " << strFromNumber << endl;
    delete[] strFromNumber;

    char uppercaseStr[] = "hello";
    Uppercase(uppercaseStr);
    cout << "Uppercase: " << uppercaseStr << endl;

    char lowercaseStr[] = "HELLO";
    Lowercase(lowercaseStr);
    cout << "Lowercase: " << lowercaseStr << endl;

    char reverseStr[] = "reverse";
    mystrrev(reverseStr);
    cout << "Reversed String: " << reverseStr << endl;

    return 0;
}