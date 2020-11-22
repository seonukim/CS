// 다중포인터
// 포인터는 다중으로 사용할 수 있다

#include <stdio.h>

int main() {
    int a = 5;
    int *b = &a;
    int **c = &b;

    printf("%d\n", **c);        // 간접참조연산자
    
}