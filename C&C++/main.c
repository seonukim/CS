// printf 기본
/*
#include <stdio.h>

//int a;
int main() {
    
    int a = 7;
    printf("The number is %d.\n", a);
    
    return 0;
}
*/


// scanf
//#include <stdio.h>
//#define CRT_SECURE_NO_WARNINGS
//
//int main() {
////    int a;
//    int a, b;
//    scanf("%d %d", &a, &b);
//    printf("입력 받은 숫자는 %d, %d입니다. \n", a, b);
//
//    return 0;
//}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
//    // 사칙연산
//    int a, b;
//    scanf("%d %d", &a, &b);
//    printf("%d + %d = %d\n", a, b, a + b);
//    printf("%d - %d = %d\n", a, b, a - b);
//    printf("%d * %d = %d\n", a, b, a * b);
//    printf("%d / %d = %d\n", a, b, a / b);
//    printf("%d %% %d = %d\n", a, b, a % b);
    
    // 이스케이프 시퀀스 (Escape Sequence)
//    printf("\"A\tB\tC\tD\"\n");
//    printf("\"A\tB\tC\tD\"\n");
//    printf("\"A\tB\tC\tD\"\n");
//
//    return 0;
    
    // 관계 연산자
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", a > b);
    
    return 0;
}
