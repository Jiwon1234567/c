#include <stdio.h>
void sub(int b[], int n);
int main(void)
{
    int a[3] = {1, 2, 3};

    printf("%d %d %d \n", a[0], a[1], a[2]);
    sub(a, 3);
    printf("%d %d %d \n", a[0], a[1], a[2]);

    return 0;
}
/* void sub(int b[], int n)    //밑에 방식이랑 동일하지만 복사뜬거처럼 보여서(배열처럼 보여서) 잘 안씀
{
    b[0] = 4;
    b[1] = 5;
    b[2] = 6;
} */
void sub(int *b, int n) // 이 형식이 제일 선호되는 방식
{
    *b = 4;
    *(b+1) = 5;
    *(b+2) = 6;
}

#include <stdio.h>
int get_sum(int *p, int size);
int main(void)
{   
    int a[5] = {10, 20, 30, 40, 50};
    printf("%d\n", get_sum(a, 5));
    return 0;
}
int get_sum(int *p, int size)
{
    int i, sum = 0;
    for(i = 0; i < size; i++)
        sum += *(p+i);
    return sum;
}


#include <stdio.h>
int get_sum(int *a, int n);
int main(void)
{
    int a[] = {10, 20, 30, 40, 50};
    int value;

    value = get_sum(a, sizeof(a)/sizeof(a[0])); //sizeof(a)/sizeof(a[0]) 쓰면 배열 개수가 계속 바뀌어도 쓸 수 있다. 방 개수를 모를 때 sizeof써야 더 정확한 답이다.
    printf("%d\n", value);
    return 0;
}
int get_sum(int *b, int n)
{
    int i;
    int sum = 0;
    for(i = 0; i < n; i++)
        sum += b[i];
    return sum;
}




//다시 풀기!!!
#include <stdio.h>          
#include <stdlib.h>
#include <time.h>
#define SIZE 10

void get_data();
//double get_mean(int *p);
float get_avg(float *b, int size); //이거 써야됨

int main(void)
{
    int i;
    float data[SIZE] = {0.0};
    float avg;
    srand(time(NULL));
    for(i = 0; i < SIZE; i++)
        data[i] = rand() % 100;
    printf("< ");
    for(i = 0; i < SIZE; i++)
        printf("%2.f", data[i]);
    printf(">\n");
    printf("평균값은 %2.f", get_avg(data, 10));
    

    return 0;
}
float get_avg(float *b, int size)
{
    int i;
    float sum = 0.0f, avg;
    for(i = 0; i < SIZE; i++)
        sum += *(b+1);
    avg = sum / SIZE;
    return avg;
}

/* 
//11페이지 평균
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10
void get_data(double *p);
void print_data(double *p);
double get_avg(double *p);
int main(void)
{
    double a[SIZE] = {0.0};  //double형 배열은 초기화 할떄 0.0!!
    srand(time(NULL));
    get_data(a);
    print_data(a);
    
    printf("평균값은 %lf\n", get_avg(a));

    return 0;
}
void get_data(double *p)
{
    int i;
    for(i = 0; i < SIZE; i++)
        *(p+1) = rand() % 101;
}
void print_data(double *p)
{
    int i;
    printf("< ");
    for(i = 0; i < SIZE; i++)
        printf("%.2lf ", *(p+1));
    printf(">\n");
}
double get_avg(double *p)
{
    int i;
    double sum = 0.0;
    for(i = 0; i < SIZE; i++)
        sum += *(p+1);
    return sum / SIZE;
} */

/* 
//15페이지 자율 주행 자동차
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void getSensorData(double *r, int);
int main(void)
{
    double sensorData[3] = {0.0};
    srand(time(NULL));
    getSensorData(sensorData, sizeof(sensorData) / sizeof(sensorData[0]));
    printf("왼쪽 센서와 장애물과의 거리: %lf\n", sensorData[0]);
    printf("중간 센서와 장애물과의 거리: %lf\n", sensorData[1]);
    printf("오른쪽 센서와 장애물과의 거리: %lf\n", sensorData[2]);

    return 0;
}
void getSensorData(double *r, int size)
{
    int i = 0;
    for(i = 0; i < size; i++)
        *(r+i) = rand() % 100;
} */

/* 
//페이지 29 암호 강인성 조사
#include <stdio.h>
#include <string.h>
int main(void)
{
    char pw[10];
    int i;
    int is_upper, is_lower, is_digit;
    while(1)
    {
        printf("암호를 생성하시오: ");
        scanf("%s", pw);

        is_upper = is_lower = is_digit = 0;
        for(i = 0; i < strlen(pw); i++)
        {
            if(pw[i] >= '0' && pw[i] <= '9')
                is_digit = 1;
            else if(pw[i] >= 'A' && pw[i] <= 'Z')
                is_upper = 1;
            else if(pw[i] >= 'a' && pw[i] <= 'z')
                is_lower = 1;
        }
        if(is_digit == 1 && is_lower == 1 && is_upper == 1)
        {
            printf("적정한 암호입니다.\n");
            break;
        }
        else
            printf("숫자, 소문자, 대문자를 섞어서 암호를 다시 만드세요!\n");
    }
    return 0;
} */

/* #include <stdio.h>
#include <string.h>
int main(void)
{
    int i;
    char pw[20];
    int up, low, num = 0;
    while (1)
    {
        printf("암호를 생성하시오: ");
        scanf("%s", pw);
        for(i = 0; i < strlen(pw); i++)
        {
            if(pw[i] >= 'A' && pw[i] <= 'Z')
                up = 1;
            else if(pw[i] >= 'a' && pw[i] <= 'z')
                low = 1;
            else if(pw[i] >= '0' && pw[i] <= '9')
                num = 1;
        }
        if(up == 1 && low == 1 && num == 1 && strlen(pw) >= 10)
        {
            printf("적정한 암호입니다.\n");
            break;
        }
        else
            printf("숫자, 소문자, 대문자를 섞어서 10자리 이상 암호를 만드세요!");
    }
    return 0;
} */