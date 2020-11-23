#include <stdio.h>

int main() {
    int i = 5;                  // int형 4 bytes 변수 5를 선언
    int* p= &i;                 // 포인터변수 p에 int형 i의 값을 저장
    printf("i = %d\n", i);      // int형 변수 i 출력                    i = 5
    printf("&i=%p\n", &i);      // i의 주소값 출력                      &i = 0x7ffee7cf264c
    printf("p = %p\n", p);      // 포인터변수 p 출력                     p = 0x7ffee7cf264c
    printf("&p =%p\n", &p);     // 포인터변수 p의 주소값 출력              &p =0x7ffee7cf2640
}