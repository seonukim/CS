// 무한 루프
// 1) 무한 루프란 종료 조건 없이 한없이 반복되는 반복문을 의미한다
// 2) 일부러 무한 루프를 발생시키는 경우도 있지만 일반적인 경우 개발자의 실수로 인해 발생한다

#include <stdio.h>

int main(void) {
    for (;;) {
        // 반복문 안에 조건이 없으면 무조건 참이 된다
        printf("Hello, World!\n");
    }

    return 0;
}