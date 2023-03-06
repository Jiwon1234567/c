/*
#include <stdio.h>
void print_line(int j);
int main(void)
{
    int i, j;
    print_line(3);
    
    for(i = 0; i < 5; i++)
        printf("%d의 제곱은 %d\n", i, i * i);

    print_line(5);

    return 0;

}
void print_line(int j)
{
    int i;
    for(i = 1; i <= j; i++)
        printf("-------------------\n");
}
*/

/*
#include <stdio.h>
int add(int , int ); //x, y 안적어도됨
int main(void)
{
    int a, b;
    printf("두개의 정수를 넣어주세요 ");
    scanf("%d %d", &a, &b);

    printf("덧셈 결과 = %d\n", add(a, b));
    
    
    return 0;
}
int add(int x, int y)
{
    return x + y;
}
*/

/* 
//페이지 21 두 수 중에서 큰 수 찾기
#include <stdio.h>
int get_larger(int, int);
int main(void)
{
    int a, b;
    printf("두개의 정수를 넣어주세요 ");
    scanf("%d %d", &a, &b);

    printf("두수 중에서 큰 수는 %d입니다.\n", get_larger(a, b));
        
    return 0;
}
int get_larger(int x, int y)
{
    return (x > y) ? x : y;
} */


#include <stdio.h>
int get_larger(int, int, int);
int main()
{
    int a, b, c;
    int large;
    printf("세개의 정수를 입력하시오: ");
    scanf("%d %d %d", &a, &b, &c);

    large = get_larger(a, b, c);
    printf("제일 큰 수는 %d\n", large);

    return 0;
}
int get_larger(int a, int b, int c)
{
    int max;
    max = (a > b) ? a : b;
    max = (max > c) ? max : c;

    return max;
    
    /* if(a > b)
    {
        if(a > c)
            return a;
        else
            return c;
    }
    else
    {
        if(b > c)
            return b;
        else
            return c;
    } */
}


/* 
//페이지 25 소수 찾기
#include <stdio.h>
int find_prime(int );
int main(void)
{
    int i, n;
    printf("정수를 입력하시오: ");
    scanf("%d", &i);

    if(find_prime(i) == 0)
        printf("%d은 소수가 아닙니다.\n", i);
    else
        printf("%d는 소수입니다.\n",i);

    return 0;
}
int find_prime(int n)
{
    int i;
    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
            return 0;
    }
    return 1;
} */



/*
//페이지 30 초기값과 끝값 더하기
#include <stdio.h>
int sum_num(int, int);
int main()
{
    int a, b;
    printf("초기값과 끝값을 입력하세요: ");
    scanf("%d %d", &a, &b);
    printf("초기값부터 끝값까지의 합은 %d입니다.\n", sum_num(a, b));

    return 0;
}
int sum_num(int x, int y)
{
    int i, min, max;
    int sum = 0;
    max = (x > y) ? x : y;
    min = (x < y) ? x : y;

    for(i = min; i <= max; i++)
        sum += i;

    return sum;
}
*/