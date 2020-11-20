// 배열의 원소 주엥서 최댓값 찾기

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
    int a[10] = {6, 5, 4, 3, 9, 8, 0, 1, 2, 7};
    int i, maxValue = INT_MIN;      // INT_MIN은 int형으로 표현할 수 있는 숫자 중, 가장 작은 값이 담겨 있다, 약 -2,000,000,000
    for (i=0; i<10; i++) {
        if (maxValue < a[i]) {
            maxValue = a[i];        // i가 0부터 10의 index까지 돌며 maxValue를 계속 갱신 시킴, 이전 maxValue보다 크면 maxValue는 갱신됨
        }
    }
    printf("%d\n", maxValue);
}