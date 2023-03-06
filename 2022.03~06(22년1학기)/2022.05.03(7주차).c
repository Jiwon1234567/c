/*#include <stdio.h>
int main(void)
{
    int i = 0;
    while(++i <= 5)
    {
        printf("환영합니다.\n");
    }
    printf("반복이 종료되었습니다.");

    return 0;
}*/


/*#include <stdio.h>  //9페이지
int main(void)
{
    int i = -1;
    while(++i <= 9)
    {
        printf("%d ", i);
    }
    return 0;
}*/

/*#include <stdio.h>  //11페이지
int main(void)
{
    int i = 0;
    int sum = 0;
    while(++i <= 10)
    {
        sum += i;
    }
    printf("합계=%d", sum);
    return 0;
}*/

/*#include <stdio.h>  //13페이지
int main()
{
    int i = 0;
    int end;
    int sum = 0;
    printf("최종값을 넣어주세요: ");
    scanf("%d", &end);
    while(++i <= end)
    {
        sum += i;
    }
    printf("합계=%d", sum);
    return 0;
}*/

/*#include <stdio.h>  //15페이지 (변수 2개 쓰는법)
int main()
{
    int first, end;
    int sum = 0;
    printf("초기값과 최종값을 넣어주세요: ");
    scanf("%d %d", &first, &end);
    first -= 1;
    while(++first <= end)
    {
        sum += first;
    }
    printf("합계=%d", sum);
    return 0;
}*/

/*#include <stdio.h>  //15페이지 (변수 3개 쓰는법)
int main()
{
    int first, end;
    int i;
    int sum = 0;
    printf("초기값과 최종값을 넣어주세요: ");
    scanf("%d %d", &first, &end);
    i = first - 1;
    while(++i <= end)
    {
        sum += i;
    }
    printf("합계=%d", sum);
    return 0;
}*/


/*#include <stdio.h>  //15페이지 (변수 3개 쓰는법) 삼항연산자
int main()
{
    int num1, num2;
    int min, max;
    int sum = 0;
    printf("초기값과 최종값을 넣어주세요: ");
    scanf("%d %d", &num1, &num2);
    min = (num1 > num2) ? num2 : num1;  //삼항연산자 중요
    max = (num2 > num1) ? num2 : num1;
    while(min <= max)
    {
        sum += min;
        min++;
    }
    printf("합계=%d", sum);
    return 0;
}*/

/*#include <stdio.h>    //19페이지
int main(void)
{
    int i = 1;
    int sum;
    printf("정수를 넣어주세요(종료 0):\n");
    while(i != 0)      //i의 초기값을 0으로 주면 안됨
    {
        scanf("%d", &i);
        sum += i;
    }
    printf("합계=%d", sum);
    return 0;
}*/

/*#include <stdio.h>    //19페이지 !!!기말고사 나옴!!! 숙제
int main(void)
{
    char i[20];
    int sum;
    printf("정수를 넣어주세요(종료 n):\n");
    while(i != 'n')      //i의 초기값을 0으로 주면 안됨
    {
        scanf("%d", &i);
        sum += i;
    }
    printf("합계=%d", sum);
    return 0;
}*/

/*#include <stdio.h>  //23페이지
int main(void)
{
    int i = 0, num;
    int sum;
    printf("단 수를 입력하세요: ");
    scanf("%d", &num);
    while(++i <= 9)
    {
        sum = num * i;
        printf("%d*%d = %d\n", num, i, sum);
    }
    return 0;
}*/

/*#include <stdio.h>      //왕중요!!!
int main(void)
{
    int i = 1, j = 1, sum;
    while(i <= 9)
    {
        printf("-------%d단-------\n", i);
        while(j < 10)
        {  
            sum = i * j;
            printf("%d*%d = %d\n", i, j, sum);
            j++;
        }
        i++;
        j = 1;
    }
    return 0;
}*/

/*#include <stdio.h>      //25페이지  
#include <limits.h>     //버전 바뀌면서 c에서는 EOF못쓰게 됐음 C++는 가능
int main(void)
{
    int number, min_value = INT_MAX;
    printf("정수를 입력하시오(종료는 Ctrl+z)\n");
    while(scanf("%d", &number) != EOF)
    {
        if(number < min_value)
            min_value = number;
    }
    printf("최소값은 %d\n", min_value);
    return 0;
}*/

/*#include <stdio.h>      //27페이지
int main()
{
    int i;
    printf("숫자를 입력하시오: ");
    scanf("%d", &i);
    while(i > 0)
    {
        printf("%d\n", i);
        --i;
    }
    printf("발사!");
    return 0;
}*/

/*#include <stdio.h>      //29페이지
int main()
{
    int i, end;
    int sum = 0;
    printf("초기값과 최종값을 입력하시오: ");
    scanf("%d %d", &i, &end);
    while(i < end)
    {
        if(i % 3 == 0)
        {
            sum += i;
        }
        i++;
    }
    printf("1부터 100사이의 모든 3의 배수의 합은 %d입니다.", sum);
    return 0;
}*/

/*#include <stdio.h>      //32페이지
int main()
{
    int i = 10;
    do
    {
        printf("Hello %d\n", i);
        i--;
    } while (i > 0);
    return 0;
}*/

/*#include <stdio.h>      //34  
int main()                //break써서 푸는법 연습
{
    int i;
    int sum;
    do
    {
        printf("정수를 입력하시오<0이면 종료> : ");
        scanf("%d", &i);
        sum += i;
    } while (i != 0);
    printf("정수의 합계 : %d", sum);
    return 0;  
}*/

/*#include <stdio.h>      //36  while, switch
int main()
{
    char color;
    while(color != 'r' && color != 'y' && color != 'g')
    {
        printf("신호등 색상을 입력하세요<r, y, g>: ");
        scanf(" %c", &color);       //%c앞에 공백 (엔터를 글자로 인식해서 그럼)
    } 

    switch (color)
    {
        case 'r':
            printf("정지");
            break;
        case 'y':
            printf("주의");
            break;
        case 'g':
            printf("진행");
            break;
    }
    return 0;
}*/

#include <stdio.h>      //36  while, if
int main()
{
    char color;
    while(color != 'r' && color != 'y' && color != 'g')
    {
        printf("신호등 색상을 입력하세요<r, y, g>: ");
        scanf(" %c", &color);       //%c앞에 공백 (엔터를 글자로 인식해서 그럼)

        if(color == 'r')
            printf("정지");
        else if(color == 'y')
            printf("주의");
        else if(color == 'g')
            printf("진행");
        break;
    } 
    return 0;
}