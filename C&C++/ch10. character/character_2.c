// 문자 입출력 함수
// 1) 이러한 문자는 getchar()를 이용해서 입력을 받는 방식을 이용할 수 있다
// 2) getchar()는 단 하나의 문자를 입력 받는다

#include <stdio.h>

int main() {
    char a = getchar();
    printf("%c\n", a);
}