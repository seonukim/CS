// C언어는 특정한 인덱서의 문자에 바로 접근할 수 있다

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char a[20] = "Hello World";
    a[4] = ',';         // 바로 접근해서 수정 가능
    printf("%s", a);
}