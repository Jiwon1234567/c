#include <stdio.h>
#include "add.h"

int main(void)
{
    int a, b;
    printf("두개의 정수를 넣어주세요 ");
    scanf("%d %d", &a, &b);

    printf("덧셈 결과 = %d\n", add(a, b));
    
    
    return 0;
}
