/* #include <stdio.h>   //3page
#include <math.h>
int main(void)
{
    int i = 0, sum = 0;

    do
    {   
        i++;
        sum += pow(i, 2);
    } while (sum <= 10000);
    printf("i=%d", i);
}*/


/* #include <stdio.h>      //4page 왕중요!!!
int main(void)
{
    int i, j = 0;

    printf("정수를 입력하시오: ");
    scanf("%d", &i);

    do
    {
        j = (j * 10) + i % 10;
        i /= 10;
    } while (i != 0);
    
    printf("반전된 정수는 : %d", j);

    return 0;
} */


//CHAPTER 12 횟수로 반복하기

/* #include <stdio.h>      //9page
int main(void)
{
    int i = 0;
    for(;;)
    {
        if(i == 5)
            break;
        printf("Hello world\n");
        i++;
    }
        
    return 0;
 }*/


/* #include <stdio.h>  //11page
int main(void)
{
    int i = 1, j, sum = 0;
    printf("어디까지 계산할까요: ");
    scanf("%d", &j);

    for(; i <= j; i++)
    {
        sum += i;
    }
    printf("1부터 10까지의 정수의 합= %d",sum);

    return 0;
} */

/* #include <stdio.h>
int main(void)
{
    int i, j;
    long sum = 1;  //sum 초기값 1!!!, sum이 커서 long으로 잡음
    printf("정수를 입력하시오: ");
    scanf("%d", &j);
    
    for(i = 1; i <= j; i++)
    {
        sum *= i;
    }
    printf("%d!은 %ld이다.", j, sum);   //sum출력 -> %ld

    return 0;
} */

/* #include <stdio.h>      //시험엔 안나옴
#include <windows.h>

HWND hwnd;
HDC hdc;

int main(void)
{
    int x, y, i;

    hwnd = GetForegroundWindow();
    hdc = GetWindowDC(hwnd);

    x = 50;
    y = 50;
    for(i = 0l i < 5; i++)
    {
        Rectangle(hdc, x, y, x + 30, y + 30);
        x += 100;
        getchar();
    }
    return 0;

} */

/* #include <stdio.h>
int main(void)
{
    int x, y;

    for(y = 0; y< 5; x++)
    {
        for(x = 0; x< 10; x++)
            printf("*");
        printf("\n");
    }
    return 0;
} */

/* #include <stdio.h>  
int main(void)
{
    int i, j, sum;

    for(i = 2; i <= 9; i++)
    {
        for(j = 1; j <= 9; j++)
        {
            sum = i * j;
            printf("%d*%d = %2d ", i, j, sum);      //%2d!!!
        }
        j = 1;
        printf("\n");
    }

    return 0;
} */

/* #include <stdio.h>
int main(void)
{
    int i, j, a = 0;
    printf("개수 입력 : ");
    scanf("%d", &a);
    for (i = a; i > 0; i--)
    {
        for(j = 0; j > 0; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    return 0;
} */

/* #include <stdio.h>
int main(void)
{
    int i, j;
    printf("합이 7이 되는 경우의 수를 찾아 봅니다.\n");
    printf("-------------\n");
    printf("주사위A 주사위 B");
    printf("-------------\n");

    for(i = 1; i <= 6; i++)
    {
        for(j = 1; j <= 6; j++)
        {
            if(i + j == 7)
                printf("%d%10d\n", i, j);
        }
    }
    return 0;
} */


/* #include <stdio.h>
int main(void)
{
    int i, j, k;
    printf("합이 10이 되는 경우의 수를 찾아 봅니다.\n");
    printf("----------------------\n");
    printf("주사위A 주사위 B 주사위 C");
    printf("----------------------\n");

    for(i = 1; i <= 6; i++)
    {
        for(j = 1; j <= 6; j++)
        {
            for(k = 1; k <= 6; k++)
            {
                if(i + j + k == 10)
                printf("%d%10d%10d\n", i, j, k);
            }
        }
    }
    return 0;
} */

/* #include <stdio.h>
int main(void)
{
    int i, j, k;

label:
    printf("합이 10이 되는 경우의 수를 찾아 봅니다.\n");
    printf("--------------------------------------------\n");
    printf("주사위A 주사위 B 주사위 C를 입력하세요 : ");
    scanf("%d %d %d", &i, &j, &k);
    printf("--------------------------------------------\n");
    if(i + j + k > 19)
    {
        printf("다시 입력하세요.");
        goto label;                     //오류 잡아낼때는 goto써도 됨
    }
        
    for(i = 1; i <= 6; i++)
    {
        for(j = 1; j <= 6; j++)
        {
            for(k = 1; k <= 6; k++)
            {
                if(i + j + k == 10)
                    printf("%d%10d%10d\n", i, j, k);
            }
        }
    }
    return 0;
} */

/* #include <stdio.h>      //29 page
int main(void)
{
    char a;
    for(;;)
    {
        printf("어떤 키나 누르세요, q는 종료 : ");
        scanf(" %c", &a);
        if(a == 'q')
            break;
    }
    return 0;
} */

/* #include <stdio.h>      //시험?
#include <string.h>     //왕중요!
int main(void)
{
    char a[100];
    
    for(;;)
    {
        printf("어떤 키나 누르세요, end는 종료 : ");
        scanf("%s", a);     //문자열 scanf는 &안붙임!
        
        //if(strcmp(a, "end") == 0)       // == 0
        if(!strcmp(a, "end"))
            break;
    }       
    return 0;
} */

/* #include <stdio.h>
int main(void)
{
    int i;
    for(i = 0; i < 10; i++)
    {
        if(i % 3 == 0 || i % 5 ==0)
            continue;
        printf("%d ", i);
    }
    return 0;
} */

/* #include <stdio.h>
int main(void)
{
    double capacity = 5000, remaining = 3000, amount;
    printf("현재 남아 있는 충전량: %lf", remaining);

    while(remaining > capacity * 0.1)
    {
        printf("\n충전<+>/사용<->: ");
        scanf("%lf", &amount);
        remaining += amount;

        if(remaining < 0.0)
            remaining = 0.0;
        if(remaining > capacity)
            remaining = capacity;
        printf("현재 남아 있는 충전량: %lf\n", remaining);

    }
    
    printf("경고! 충전하세요!");
    return 0;
} */

/* #include <stdio.h>      //page 34 처음부터 다시풀기 다 틀렸음
#include <math.h>
int main(void)
{
    double a, b, c;
    int sum = 0;

label:
    printf("세 변의 길이를 넣으세요 : ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if(a < 100 && b < 100 && c < 100)
    {
        while(pow(c, 2) == pow(a, 2) + pow(b, 2))
            sum += 1;
    }
    else
    {
        printf("100이 넘습니다. 다시 적으세요");
        goto label;
    }
    printf("%d", sum);
    return 0;
} */

/* #include <stdio.h>
#include <time.h>       //srand함수
#include <stdlib.h>     //random함수 rand()
//1+rnad()%6 -> 주사위
//rand()%100 -> 0~ 99(엄청 큰 숫자도 나오기 때문에)
int main(void)
{
    srand(time(NULL)); //현재 시간을 기준으로 랜덤 times()안에 숫자를 넣으면 같은 숫자끼리 같은 랜덤 숫자가 나옴
    int sum = 0;
    int result = rand() % 100;
    int i;
    
    do
    {
        printf("정답을 추축하여 보시오: ");
        scanf("%d", &i);
        if(i > result)
            printf("제시한 정수가 높습니다.\n");
        else if(i < result)
            printf("제시한 정수가 낮습니다.\n");
        sum += 1;
    } while (i != result);

    printf("축하합니다. 시도 횟수 = %d", sum);
    
} */


/* #include <stdio.h>       //스스로 문제 9
int main(void)
{
    int num = 1, i, j, k;
    printf("플로이드 삼각형의 행의 개수: ");
    scanf("%d", &j);

    for(i = 1; i <= j; i++)
    {
        for(k = 1; k<= i; k++)
        {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
    return 0;
} */