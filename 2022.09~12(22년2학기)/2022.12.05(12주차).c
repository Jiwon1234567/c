//페이지 15
/* #include <stdio.h>
#define SQUARE(x) ((x) * (x))
#define AVERAGE(x, y, z) (((x) + (y) + (z)) / 3.0) //나눌 때 3.0을 해줘야 돌아간다. 출력할땐 %lf
#define MAX(x, y) ((x) > (y) ? (x) : (y))
#define MIN(x, y) ((x) < (y) ? (x) : (y))
int main(void)
{
    int x = 2;

    printf("%d\n", SQUARE(x));
    printf("%d\n", SQUARE(3));
    printf("%lf\n", SQUARE(1.2));
    printf("%d\n", SQUARE(x + 3));
    printf("%d\n", 100/SQUARE(x));

    printf("average = %lf\n", AVERAGE(1, 2, 3));
    printf("max = %d\n", MAX(1, 2));
    printf("min = %d\n", MIN(1, 2));

    return 0;
} */


//페이지 17
/* #include <stdio.h>
#define SWAP(x, y, t) ((t) = (x), (x) = (y), (y) = (t))
int main(void)
{
    int x, y, t;

    printf("정수 2개를 입력하시오: ");
    scanf("%d %d", &x, &y);

    SWAP(x, y, t);

    printf("SWAP()의 실행 결과: %d %d\n", x, y);
    return 0;
} */

//페이지 28 malloc사용
/* #include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int *list = NULL;
    list = (int *)malloc(3*sizeof(int));
    if(list == NULL)
    {
        printf("동적메모리 할당 오류\n");
        exit(1);
    }
    list[0] = 10;
    list[1] = 20;
    list[2] = 30;
    printf("%d %d %d\n", list[0], list[1], list[2]);
    free(list);
    return 0;
} */

//malloc calloc 중 뭐를 쓰라 말 없으면 아무거나 사용하면됨

//페이지 28 calloc사용
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int *list = NULL;
    list = (int *)calloc(3, sizeof(int));
    if(list == NULL)
    {
        printf("동적메모리 할당 오류\n");
        exit(1);
    }
    list[0] = 10;
    list[1] = 20;
    list[2] = 30;
    printf("%d %d %d\n", list[0], list[1], list[2]);
    free(list);
    return 0;
}

//페이지 29 예제2
/* #include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int *list;
    int i, students;

    printf("학생의 수: ");
    scanf("%d", &students);

    list = (int *)malloc(students * sizeof(int));

    if(list == NULL)
    {
        printf("동적 메모리 할당 오류\n");
        exit(1);
    }

    for(i = 0; i < students; i++)
    {
        printf("학생 #%d 성적: ", i + 1);
        scanf("%d", &list[i]);
    }
    printf("===========================\n");
    for(i = 0; i < students; i++)
        printf("학생 #%d 성적: %d\n", i + 1, list[i]);
    free(list); //꼭 반납해줘야됨
    return 0;
} */


//페이지 33
/* #include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Book {
    int number;
    char title[50];
};
int main(void)
{
    int n;
    printf("책의 수: ");
    scanf("%d", &n);

    struct Book *p;
    p = (struct Book *)malloc(n * sizeof(struct Book));

    getchar();  //정수를 받고 문자열을 바로 받을 때는, 엔터가 문자열로 들어가기 때문에 getchar()를 써줘야된다

    for(int i = 0; i < n; i++)
    {
        p[i].number = i + 1;
        printf("#%d번째 책 제목: ", i + 1);
        gets(p[i].title);
    }
    printf("========================\n");
    for(int i = 0; i < n; i++)
    {
        p[i].number = i + 1;
        printf("#%d번째 책 제목: %s\n", i + 1, p[i].title);
    }
    free(p);

    return 0;
} */

//페이지 39
/* #include <stdio.h>
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
    free(list);
    free(list_new); //요즘 컴파일러는 최종꺼만 free해줘야 에러 안뜬다

    return 0;
} */


//페이지 40
/* #include <stdio.h>
#include <stdlib.h>
struct Book {
    char title[50];
    char author[20];
    int page;
    int price;
};
int main()
{
    int n;
    printf("책을 얼마나 가지고 계신가요? ");
    scanf("%d", &n);
    getchar();//getchar 한번 적어주고 밑에 반복문에도 적어줘야됨

    struct Book *p;

    p = (struct Book *)malloc(n * sizeof(struct Book));

    for(int i = 0; i < n; i++)
    {
        printf("%d번째 책의 이름: ", i + 1);
        gets(p[i].title);
        printf("책의 저자: ");
        gets(p[i].author);
        printf("책의 페이지수: ");
        scanf("%d", &p[i].page);
        printf("책의 가격: ");
        scanf("%d", &p[i].price);
        printf("=============================\n");
        getchar();  //getchar 위치 조심
    }
    printf("\n\n");
    printf("소장하고 있는 책을 출력합니다.\n");
    printf("=============================\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d번째 책의 이름: %s\n", i + 1, p[i].title);
        printf("책의 저자: %s\n", p[i].author);
        printf("책의 페이지수: %d\n", p[i].page);
        printf("책의 가격: %d\n", p[i].price);
        printf("=============================\n");
    }
    free(p);
} */

