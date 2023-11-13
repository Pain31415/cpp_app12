#include "str_lib.h"
#include <cstring>
#include <string>

int mystrcmp(const char* str1, const char* str2) {
    return strcmp(str1, str2);
}

int StringToNumber(const char* str) {
    return atoi(str);
}

char* NumberToString(int number) {
    std::string str = std::to_string(number);
    char* result = new char[str.length() + 1];
    strcpy(result, str.c_str());
    return result;
}

char* Uppercase(char* str1) {
    int i = 0;
    while (str1[i] != '\0') {
        switch (str1[i]) {
        case 'a': case 'b': case 'c': case 'd': case 'e':
        case 'f': case 'g': case 'h': case 'i': case 'j':
        case 'k': case 'l': case 'm': case 'n': case 'o':
        case 'p': case 'q': case 'r': case 's': case 't':
        case 'u': case 'v': case 'w': case 'x': case 'y':
        case 'z':
            str1[i] = std::toupper(str1[i]);
            break;
        }
        ++i;
    }
    return str1;
}

char* Lowercase(char* str1) {
    int i = 0;
    while (str1[i] != '\0') {
        switch (str1[i]) {
        case 'A': case 'B': case 'C': case 'D': case 'E':
        case 'F': case 'G': case 'H': case 'I': case 'J':
        case 'K': case 'L': case 'M': case 'N': case 'O':
        case 'P': case 'Q': case 'R': case 'S': case 'T':
        case 'U': case 'V': case 'W': case 'X': case 'Y':
        case 'Z':
            str1[i] = std::tolower(str1[i]);
            break;
        }
        ++i;
    }
    return str1;
}

char* mystrrev(char* str) {
    int length = strlen(str);
    int i = 0;
    int j = length - 1;
    while (i < j) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        ++i;
        --j;
    }
    str[length] = '\0';
    return str;
}