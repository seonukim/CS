// C언어에서는 하나의 무자는 '1bytes'만 담는다
// 닫시 말해 문자열은 사실 문자 + 배열, 즉 문자의 배열이라고 할 수 있다

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char a[20];             // 기본적으로 문자열을 선언할 때는 문자열의 크기보다 배열의 크기가 크도록 선언
    scanf("%s", &a);        // 문자열을 입력 받거나 출력할 때는 %s라는 형식 지정자를 사용한다
    printf("%s\n", a);
}