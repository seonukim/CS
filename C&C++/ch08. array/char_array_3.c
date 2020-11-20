#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char a[] = "Hello World";
    int i;
    int cnt = 0;

    for (i=0; i<20; i++) {
        if (a[i] == 'l') {
            cnt++;          // a[i]가 l이면 cnt를 1씩 증가시킴
        }
    }

    printf("%d\n", cnt);
}