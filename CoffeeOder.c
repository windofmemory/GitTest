#include <stdio.h>

int main() {
    int choice;
    
    printf("커피를 주문해주세요:\n");
    printf("1. 아메리카노\n");
    printf("2. 카페라떼\n");
    printf("3. 카푸치노\n");
    
    scanf("%d", &choice);
    
    switch(choice) {
        case 1:
            printf("아메리카노를 주문하셨습니다.\n");
            break;
        case 2:
            printf("카페라떼를 주문하셨습니다.\n");
            break;
        case 3:
            printf("카푸치노를 주문하셨습니다.\n");
            break;
        default:
            printf("잘못된 선택입니다.\n");
            break;
    }
    
    return 0;
}
