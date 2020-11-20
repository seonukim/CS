// 반복문으로 특정 숫자에 대한 구구단을 만들어보자

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int i = 1;
    while (i <= 9) {
        printf("%d * %d = %d\n", n, i, n * i);
        i++;
    }
    return 0;
}
