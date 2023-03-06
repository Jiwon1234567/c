/* 
//스스로 학습 1
#include <stdio.h>
int main(void)
{

    int list[]={0,1,2,3,4,5,6,7,8,9}; 
    int *p;
    p=list;
    printf("%d\n", *list); //0
    printf("%d\n", *p + 1); //1
    printf("%d\n", *(p+1));//1
    return 0;
} */

/* 
//스스로 학습2
#include <stdio.h>
void get_sum_diff(int x, int y, int *p_sum, int *p_diff);
int main(void)
{
    int a = 3, b = 5;
    int p_sum;
    int p_diff;
    
    get_sum_diff(a, b, &p_sum, &p_diff);
    printf("sum = %d\n", p_sum);
    printf("diff = %d\n", p_diff);

    return 0;
}
void get_sum_diff(int x, int y, int *p_sum, int *p_diff)
{
    *p_sum = x + y;
    *p_diff = x - y;
} */