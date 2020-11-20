// -1이 될 때까지 더하기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int sum = 0;
    for (; 1;) {
        int x;
        scanf("%d", &x);

        if (x == -1)
        break;

        sum += x;
    }
    printf("%d\n", sum);
}
