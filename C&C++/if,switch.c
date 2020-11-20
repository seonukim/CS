// IF문
// 1) IF문 내부의 조건을 검사해 프로그램의 진행 경로를 결정한다.
// 2) IF문은 조건의 개수가 많지 않을 때 사용하는 것이 유리하다.

// if (조건 1) {
//          조건 1에 부합할 때 실행할 코드
// }
// else if (조건 2) {
//          조건 1에 부합하지 않지만 조건 2에 부합할 때 실행할 코드
// }
// else {
//          위 조건들에 모두 부합하지 않을 때
// }

#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
//
//int main() {
//    printf("손님이 몇 명 왔나요? ");
//
//    int a;
//    scanf("%d\n", &a);
//
//    if (a == 1 || a == 2) {
//        printf("2인석으로 안내합니다. \n");
//    }
//    else if (a == 3 || a == 4) {
//        printf("4인석으로 안내합니다. \n");
//    }
//    else {
//        printf("대형석으로 안내합니다. \n");
//    }
//
////    system("clear");
//
//    return 0;
//}


//int main() {
//    int size;
//    printf("메인 메모리의 크기를 입력하세요. (GB) ");
//    scanf("%d", &size);
//
//    if (size >= 16) {
//        printf("메인 메모리의 크기가 충분합니다. \n");
//    }
//    else {
//        printf("메인 메모리를 증설하세요. \n");
//    }
////    system("clear");
//
//    return 0;
//}


// switch문
// 1) 다양한 조건이 존재할 때 사용하면 소스코드를 짧게 유지할 수 있다.
// switch (확인 대상) {
// case 값1:
//       값1에 부합할 때
// case 값2:
//       값2에 부합할 때
// Default:
//       모든 경우
// }

//int main() {
//    printf("학점을 입력하세요. \n");
//
//    char a;
//    scanf("%c", &a);
//
//    switch (a) {
//    case 'A' :
//        printf("A학점입니다. \n");
//    case 'B' :
//        printf("B학점입니다. \n");
//    case 'C' :
//        printf("C학점입니다. \n");
//    default:
//        printf("학점을 바르게 입력하세요. \n");
//    }
//
//    return 0;
//}

// 위 코드는 에러가 있다.
// switch문은 조건에 부합하는 경우 아래 쪽의 case도 모두 만족시킨다.
// 따라서 일반적인 경우 case문의 마지막에 break를 걸어서 특정 부분만 실행시키도록 컨드롤해준다.


//int main() {
//    printf("학점을 입력하세요. \n");
//    char a;
//    scanf("%c", &a);
//
//    switch (a) {
//        case 'A':
//            printf("A학점입니다. \n");
//            break;
//        case 'B':
//            printf("B학점입니다. \n");
//            break;
//        case 'C':
//            printf("C학점입니다. \n");
//            break;
//        default:
//            printf("학점을 바르게 입력해주세요. \n");
//            break;
//    }
//
//    return 0;
//}

// switch문에는 char, int, long, double 등의 자료형을 사용할 수 있다.


int main() {
    printf("월을 입력하세요. \n");
    int a;
    
    scanf("%d", &a);
    
    switch (a) {
        case 3:
        case 4:
        case 5:
            printf("봄\n");
            break;
        case 6:
        case 7:
        case 8:
            printf("여름\n");
            break;
        case 9:
        case 10:
        case 11:
            printf("가을\n");
            break;
        case 12:
        case 1:
        case 2:
            printf("겨울\n");
            break;
            
        default:
            break;
    }
    return 0;
}
