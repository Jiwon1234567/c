/* 
//페이지3 연습문제
#include <stdio.h>
double func(int, int);
int main(void)
{
    int x, y;
    for(x = 0; x < 3.0; x++)
    {
        for(y = 0; y < 3.0; y++)
        {
            printf("%lf ", func(x, y));
        }
        printf("\n");
    }
    return 0;
}
double func(int x, int y)
{
    return 1.5 * x + 3.0 * y;
} */



/* 
//페이지 8 로또 번호 같은거 안나오게 하는거
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 45
int main(void)
{
    int num[6] = {0};
    srand(time(NULL));
    for(int i = 0; i < 6; i++)
    {
        num[i] = (rand() % MAX) + 1;
        
        for(int j = 0; j < i; j++)
        {
            if(num[i] == num[j])
                i--;
        }
    }
    for(int i = 0; i < 6; i++)
    {
        printf("%d ", num[i]);
    }
    return 0;
} */





//p.12 동전 던지기 게임(print문은 main함수에서 하기)
/* #include <stdio.h>
#include <stdlib.h>
#include <time.h>
int count();
int main(void)
{
    int i, front = 0, back = 0;
    srand(time(NULL));
    for(i = 0; i < 100; i++)
    {
        if(count() == 0)
            front++;
        else
            back++;
    }
    printf("동전의 앞면: %d\n", front);
    printf("동전의 뒷면: %d\n", back);
    return 0;
}
int count()
{
    return rand()%2;
} */


//p.19 삼각함수 관계식(기호상수 사용!), 시험엔 sin, cos은 안나옴
/* #include <stdio.h>
#include <math.h>
#define PI 3.141592
double rad(double degree);
int main()
{
    double x, y, result;

    x = sin(rad(60.0));
    y = cos(rad(60.0));

    result = x * x + y * y;
    printf("result = %.1lf \n", result);

    return 0;
}
double rad(double degree)
{
    return PI * degree / 180.0;
} */

/* 
//페이지 19 삼각함수 관계식 계산
#include <stdio.h>
#include <math.h>
#define PI 3.141592
double rad(double degree);
int main(void)
{
    double x, y, result;

    x = sin(rad(60.0));
    y = cos(rad(60.0));

    result = x * x + y * y;
    printf("result = %lf", result);
    
    return 0;
}
double rad(double degree)
{
    return PI * degree;
} */

/* 
//페이지 21 자동차 게임
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int make_num(void);
void print_star(int, int);
int main(void)
{
    int a = 0, b = 0;
    int i;
    srand(time(NULL));
    for(i = 0; i < 5; i++)
    {
        a += make_num();
        b += make_num();
        print_star(1, a);
        print_star(2, b);
        printf("--------------------\n");
        getchar();   //누를때마다 넘어감 꼭 넣기!!!!
    }
    return 0;
}
int make_num(void)
{
    return rand() % 5;
}
void print_star(int x, int y)
{
    int i;
    printf("CAR #%d:", x);
    for(i = 0; i < y; i++)
        printf("*");
    printf("\n");
} */


/* #include <stdio.h>
#include <stdlib.h>
#include <time.h>
int make_rand();
int main()
{
    int i, j;
    srand(time(NULL));
    for(i = 0; i < 5; i++)
    {
        printf("CAR #1:");
        for(j = 0; j < make_rand(); j++)
        {
            printf("*");
        }
        printf("\nCAR #2:");
        getchar();
        printf("-------------------\n");
    }

    return 0;
}
int make_rand()
{
    return rand()%20;
}
 */


//p.26 스스로 학습 1
/* #include <stdio.h>
#include <stdlib.h>
#include <time.h>
int get_integer();
int get_larger(int a, int b, int c);
int main()
{
    int i;
    int integer[3] = {0};
    printf("세 개의 정수를 입력하시오: ");
    for(i = 0; i < 3; i++)
    {
        integer[i] = get_integer();
    }
    printf("가장 큰 수는 %d입니다\n", get_larger(integer[0], integer[1], integer[2]));
    
    return 0;
}
int get_integer()
{
    int i;
    scanf("%d", &i);
    return i;
}
int get_larger(int a, int b, int c)
{
    int max;
    max = (a > b) ? a : b;
    max = (max > c) ? max : c;

    return max;
}
 */


//스스로 학습 1
/* #include <stdio.h>
#define SIZE 3
int get_integer(void);
int get_larger(int, int, int);
int main(void)
{
    int i, integer[SIZE] = {0};
    printf("세 정수를 입력하시오: ");
    for(i = 0; i < SIZE; i++)
        integer[i] = get_integer();
    printf("가장 큰 수는 %d입니다.\n", get_larger(integer[0], integer[1], integer[2]));

}
int get_integer(void)
{
    int x;
    scanf("%d", &x);
    return x;
}
int get_larger(int a, int b, int c)
{
    int max;
    max = (a > b) ? a : b;
    max = (max > c) ? max : c;
    return max;
} */


//스스로 학습2
/* #include <stdio.h>
int multi(int, int);
int main(void)
{
    int a, b;
    printf("첫 번째 정수 입력: ");
    scanf("%d", &a);
    printf("두 번째 정수 입력: ");
    scanf("%d", &b);
    if(multi(a, b) == 0)
        printf("%d은 %d의 배수입니다.\n", a, b);
    else
        printf("%d은 %d의 배수가 아닙니다.\n", a, b);
    return 0;
}
int multi(int x, int y)
{
    return x % y;
} */