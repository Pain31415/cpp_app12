#include <iostream>
#include <cstring>

int main() {
    char str1[50] = "Hello, ";
    const char* str2 = "World!";

    size_t len1 = strlen(str1);
    size_t len2 = strlen(str2);

    if (len1 + len2 < sizeof(str1) - 1) {
        strcat(str1, str2);
    }
    else {
        std::cout << "Error: Insufficient buffer space for concatenation." << std::endl;
    }

    std::cout << "After Concatenation: " << str1 << std::endl;

    return 0;
}