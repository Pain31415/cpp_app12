#include <iostream>
#include "str_lib.h"

int main() {
    const char* myString = "Hello, World!";

    int length = mystrlen(myString);

    std::cout << "Length of the string: " << length << std::endl;

    return 0;
}