#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char a[20] = "Hello World";
    a[4] = ',';
    printf("%s", a);
}