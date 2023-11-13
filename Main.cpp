#include <iostream>
#include "str_lib.h"

int main() {
    const char* sourceString = "Hello, World!";
    char destinationString[20];

    char* result = mystrcpy(destinationString, sourceString);

    std::cout << "Copied string: " << destinationString << std::endl;

    return 0;
}