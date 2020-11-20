// 재귀함수
// 1) 재귀함수란 자기 자신을 포함하는 함수
// 2) 기본적으로 자기 자신을 계속 호출한다
// 3) 따라서 반드시 **재귀 종료 조건**이 필요하다

// 재귀함수_ 예졔) 팩토리얼
#include <stdio.h>

int factorial(int a) {
    if (a == 1) {   // 재귀 종료 조건; a가 1이 될 때 종료
        return 1;
    }else{
        return a * factorial(a - 1);    // 함수 내부에서 자기 자신을 호출함
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d 팩토리얼을 계산합니다.\n", n);
    scanf("%d", &n);
    printf("%d\n", factorial(n));

}
