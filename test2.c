#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int *list = (int *)malloc(sizeof(int) * 2);
    int i;

    list[0] = 10;
    list[1] = 20;
    
    int *list_new;
    list_new = (int *)realloc(list, sizeof(int) * 3);
    list_new[2] = 30;

    for(i = 0; i < 3; i++)
        printf("%d ", list_new[i]);
    printf("\n");

    free(list_new); //열었던 동적 메모리? 는 다 닫아야 된다

    
    return 0;
}