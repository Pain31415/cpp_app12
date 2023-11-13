#include "str_lib.h"

char* mystrcpy(char* str1, const char* str2) {
    char* result = str1;

    while (*str2 != '\0') {
        *str1 = *str2;
        str1++;
        str2++;
    }

    *str1 = '\0';
    return result;
}