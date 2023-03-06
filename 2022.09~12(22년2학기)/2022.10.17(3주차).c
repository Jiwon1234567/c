/* 
//페이지 14 저축 금액 누적하기
#include <stdio.h>
int sum_it(int);
int main(void)
{
    int i;
    for(i = 0; i < 5; i++)
        printf("현재의 합계는 %d입니다.\n", sum_it(i));
    return 0;
}
int sum_it(int n)
{
    static int sum = 0;
    sum += n;
    return sum;
} */


/* //16페이지 로그인 횟수 제한
#include <stdio.h>
int check(int, int);
int main(void)
{
    int i, id, pw;
    for(i = 0; i < 3; i++)
    {
        printf("id: ");
        scanf("%d", &id);
        printf("pass: ");
        scanf("%d", &pw);
        if(check(id, pw) == 1)
        {
            printf("로그인 성공\n");
            return 0;
        }
    }
    printf("횟수 초과\n");
    
    return 0;
}
int check(int a, int b)
{
    static int super_id = 1234;
    static int super_pw = 5678;
    if(a == super_id && b == super_pw)
        return 1;
    else
        return 0;
} */


/* //로그인 횟수 제한 (책대로)
#include <stdio.h>
#include <stdlib.h>
#define SUCCESS 1
#define FAIL 2
#define LIMIT 3
int check(int, int);
int main(void)
{
    int id, pw;
    while(1)
    {
        printf("id: ");
        scanf("%d", &id);
        printf("pw: ");
        scanf("%d", &pw);
        if(check(id, pw) == SUCCESS)
        {
            printf("로그인 성공!\n");
            break;
        }
    }
    return 0;
}
int check(int a, int b)
{
    static int super_id = 1234;
    static int super_pw = 5678;
    static int count = 0;

    count++;
    if(count >= 3)
    {
        printf("횟수 초과\n");
        exit(1);    //exit함수 -> stdlib.h
    }

    if(a == super_id && b == super_pw)
        return SUCCESS;
    else
        return FAIL;
} */


/* #include <stdio.h>

void move_(int *xpos, int *ypos);

int main(void)
{
    int x = 10;
    int y = 20;

    printf("현재의 위치 (%d, %d)\n", x, y);
    move_(&x, &y);
    printf("현재의 위치 (%d, %d)\n", x, y);

    return 0;
}

void move_(int *xpos, int *ypos)
{
    *xpos = *xpos + 1;
    *ypos = *ypos + 1;
}
 */

//왕중요!!!! 배열명 자체가 주소!!!!
/*
int a[] = {10, 20, 30, 40};
int *p = &a -> 이렇게 하면 감점
int *p = a -> 이렇게 해야됨(배열명 자체가 주소이기 때문에)
*/

//5주차 23페이지 포인터로 푼거
/* #include <stdio.h>
#define SIZE 3

int main(void)
{
    int a[SIZE] = {0};
    int i, sum = 0;
    double avg;

    for(i = 0;i < SIZE; i++)
    {
        printf("게임 %d에서 선수의 득점은? ", i + 1);
        scanf("%d", &a[i]);
    }
    for(i = 0; i< SIZE; i++)
    {
        sum += *(a+i);
    }
    avg = (double)sum / SIZE;
    printf("평균 득점은 %lf입니다.\n", avg);

    return 0;

} */
