// 배열
// 1) 3개의 숫자가 있을 때 가장 큰 숫자를 구하는 프로그램을 작성한다고 가정
// 2) 기본적으로 변수의 이름을 a, b, c로 선언하면 된다는 것을 예상할 수 있다
// 3) 하지만 숫자가 100개라면?
// 4) 비효율적이긴 하지만 변수 100개를 만들어서 선언할 수는 있음
// 5) 하지만 변수가 1,000,000개라면? 이 때는 일일이 변수를 만들어서 처리할 수 없다
// 6) 따라서 동일한 자료형을 여러 개 담는 '배열'이 필요하다

// 배열을 사용하면 동일한 성격의 데이터를 다수 표현할 수 있다
// 배열의 인덱스는 0부터 시작
// ex) index 0 1 2 3 4 5 6 7 8 9
//      data 6 5 4 3 9 8 0 1 2 7

// 위와 같은 데이터를 int형 배열로 선언하게 되면
// 총 40bytes의 메모리 공간을 갖는 배열이 선언된다  --> int는 하나 당 4bytes라서

// 배열의 선언 방법
// 자료형 배열명[배열의 크기] = {초기화 값};    --> 초기화 값은 없을 수도 있다
// 전체 배열의 원소가 0이라면,
// {0,}     --> 0 뒤에 , 를 붙여줘야한다

#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[10] = {6, 5, 4, 3, 9, 8, 0, 1, 2, 7};
    int i;
    for (i=0; i<10; i++) {
        printf("%d ", a[i]);     // 배열의 개별 원소에 접근할 때는 a[index] 형대로 인덱싱
    }
    system("clear");
}