#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char a[] = "Hello World";
    int i;
    int cnt = 0;

    for (i=0; i<20; i++) {
        if (a[i] == 'l') {
            cnt++;
        }
    }

    printf("%d\n", cnt);
}