/* #include <stdio.h>
#define SIZE 5
int main()
{
    int i, grade[SIZE];
    grade[i] = 0;
    for(i = 0; i < SIZE; i++)
        grade[i] = i + 1;
    for(i = 0; i < SIZE; i ++)
        printf("grade[%d]=%d\n", i, grade[i]);
    return 0;
} */

/* #include <stdio.h>
#define SIZE 5
int main()
{   
    //int SIZE = 5;   배열에서는 무조건 #define으로 해줘야됨
    int i, grade[SIZE];
    //grade[i] = 0;
    int sum = 0;
    double avg = 0;
    printf("%d명의 점수를 넣으세요\n", SIZE);
    for(i = 0; i < SIZE; i++)
    {
        scanf(" %d", &grade[i]);
        sum += grade[i];
    }
    avg = sum / SIZE;
    printf("평균 = %lf", avg);
        
    return 0;   
} */

/* #include <stdio.h>
#define SIZE 100
int main()
{
    int i, grade[SIZE];
    int n;
    int sum = 0;
    double avg = 0;
    printf("점수를 넣을 인원을 입력하세요");
    scanf("%d", &n);
    printf("%d명의 점수를 넣으세요\n", n);
    for(i = 0; i < n; i++)
    {

        scanf(" %d", &grade[i]);
        sum += grade[i];
    }
    avg = sum / n;
    printf("평균 = %lf", avg);
        
    return 0;   
} */

/* #include <stdio.h>
#define SIZE 3
int main()
{
    int game, score[SIZE], sum = 0, i, size;
    double avg = 0;
    
    for(i = 0; i < SIZE; i++)
    {
        printf("게임 %d에서 선수의 득점은? ", i + 1);
        scanf("%d", &score[i]);
        sum += score[i];
    }
    size = sizeof(score) / sizeof(score[0]);
    avg = sum / size;
    printf("평균 득점은 %lf입니다.", avg);

    return 0;
} */

/* #include <stdio.h>
#define SIZE 5
int main()
{   
    int i, min, grade[SIZE] = {0};

    for(i = 0; i < SIZE; i++)
    {
        printf("%d번째 숫자를 입력하세요", i + 1);
        scanf("%d", &grade[i]);
    }
    for(i = 1; i < SIZE; i++)
    {
        if(min > grade[i])
            min = grade[i];
    }
    printf("최소값은 %d입니다.", min);

    return 0;
} */

/* #include <stdio.h>
#define SIZE 6
int main()
{
    int i, grade[SIZE] = {0}, num;
    
    for(i = 0; i < SIZE; i++)
    {
        printf("%d번째 숫자를 입력하세요 : ", i + 1);
        scanf("%d", &grade[i]);
    }
    printf("위치를 찾을 숫자를 입력하세요 : ");
    scanf("%d", &num);
    for(i = 0; i < SIZE; i++)
    {
        if (grade[i] == num)
        {
            printf("%d의 위치는 %d입니다.\n", num, i);
        }
        
    }
    return 0;
} */


/* #include <stdio.h>
#define SIZE 5
int main()
{
    int i, grade[SIZE] = {0}, num, sum = 0;
    
    printf("%d명의 성적을 입력하세요\n", SIZE);
    for(i = 0; i < SIZE; i++)
    {
        printf("%d번째 점수를 입력하세요 : ", i + 1);
        scanf("%d", &grade[i]);
    }
    printf("점수를 찾을 숫자를 입력하세요 : ");
    scanf("%d", &num);
    for(i = 0; i < SIZE; i++)
    {
        if (grade[i] == num)
        {
            sum += 1;
            
        }
        
    }
    printf("%d점은 %d명 입니다.", num, sum);
    return 0;
} */

/* #include <stdio.h>
#define SIZE 10
int main()
{
    int i, candidate;
    int freq[SIZE] = {0};
    while(1)
    {
        printf("몇 번 연예인을 선택하시겠습니까<종료 -1> : ");
        scanf("%d", &candidate);
        if(candidate == -1)
            break;
        freq[candidate-1]++;
    }
    printf(" 값 득표결과\n");
    for(i = 0; i < SIZE; i++)
        printf("%3d %3d \n", i + 1, freq[i]);
    return 0;
} */

/* #include <stdio.h>
int main()
{
    int a[2][3], i, j;
    for(i = 0; i < 2; i++)
        for(j = 0;j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    for(i = 0; i < 2; i++)
    {
        for(j = 0;j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
} */

///!!!!!!!!!!!!!!왕중요!!!!!!!!!!!!!!!
/* #include <stdio.h>       
int main()
{
    int a[3][3], i, j;
    int temp = 0, sum[3] = {0}, sum1[3] = {0};
    //int kor_sum = 0, eng_sum = 0, math_sum = 0; //행렬로 짜보기
    //double kor_avg = 0.0, eng_avg = 0.0, math_avg = 0.0;
    int avg;
    printf("세 명의 학생에 대한 국어, 영어, 수학의 점수를 입력하세요.\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0;j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            temp += a[i][j];
        }
        sum[i] = temp;
        temp = 0;
    }
    printf("국어 평균: %lf, 영어 평균: %lf, 수학 평균: %lf\n", sum[0]/3.0, sum[1]/3.0, sum[2]/3.0);
    for(j = 0; j < 3; j++)
    {
        for(i = 0; i < 3; i++)
        {
            temp += a[i][j];
        }
        sum1[j] = temp;
        temp = 0;
    }
    printf("국어 평균: %lf, 영어 평균: %lf, 수학 평균: %lf", sum1[0]/3.0, sum1[1]/3.0, sum1[2]/3.0);
    
    return 0;
} */

//10주차  39페이지 연습문제 !!!!!!!!!!!!왕중요!!!!!!!!!!!!!!여러번 풀어보기!!!!!!!!!!!!!1
/* #include <stdio.h>
#define SIZE 10
int main(void)
{
    int i, num, input_point, input_num;
    int a[SIZE] = {0};
    printf("배열 요소의 개수: ");
    scanf("%d", &num);
    printf("배열 요소를 입력하라.\n");
    for(i = 0; i < num; i++)
        scanf(" %d", &a[i]);
    printf("삽입 위치: ");
    scanf("%d", &input_point);
    printf("삽입 값: ");
    scanf("%d", &input_num);
    printf("결과 배열\n");
    for(i = SIZE - 1; i >= input_point; i--)
        a[i + 1] = a[i];
    a[input_point] = input_num;
    for(i = 0; i <= num; i++)
        printf("%d\n", a[i]);
    return 0;
} */


#include <stdio.h>
int main()
{
    int a[3][3], i, j;

    int sum[3] = {0}, temp = 0, avg = 0;

    printf("세 명의 학생에 대한 국어, 영어, 수학 점수를 입력하세요. \n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j< 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j< 3; j++)
        {
            temp += a[i][j];

        }
        sum[i] = temp;
    }
    

    printf("국어 평균: %lf, 영어 평균: %lf, 수학 평균: %lf", ((double)sum[0])/3, ((double)sum[1])/3, ((double)sum[2])/3);


    return 0;
}