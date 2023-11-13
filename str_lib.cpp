#include "str_lib.h"

int mystrlen(const char* str) {
    int length = 0;

    while (str[length] != '\0') {
        length++;
    }

    return length;
}