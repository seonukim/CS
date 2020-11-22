// 배열의 각 원소의 주소 값 출력해보기
#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    for (int i=0; i<=10; i++) {
        printf("%d\n", &a[i]);
    }
}