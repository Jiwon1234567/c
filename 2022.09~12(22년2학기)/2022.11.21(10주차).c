//페이지 6
/* #include <stdio.h>
#define SIZE 3
struct student {
    int number;
    char name[20];
    double grade;
};
int main(void)
{
    struct student list[SIZE];

    for(int i = 0; i < SIZE; i++)
    {
        printf("학번을 입력하시오: ");
        scanf("%d", &list[i].number);
        printf("이름을 입력하시오: ");
        scanf("%s", list[i].name);
        printf("학점을 입력하시오: ");
        scanf("%lf", &list[i].grade);
    }
    for(int i = 0; i < SIZE; i++)
        printf("이름: %s, 학점: %lf\n", list[i].name, list[i].grade);
    
    return 0;
} */


//페이지 6 변형
/* #define SIZE 2
#include <stdio.h>
struct student{
    int number;
    char name[20];
    //double grade;
    int kor;
    int math;
    int eng;
    double avg;
};
int main(void)
{
    struct student list[SIZE];

    for(int i = 0; i < SIZE; i++)
    {
        printf("학번을 입력하시오: ");
        scanf("%d", &list[i].number);
        printf("이름을 입력하시오: ");
        scanf("%s", list[i].name);
        printf("국어 점수을 입력하시오: ");
        scanf("%d", &list[i].kor);
        printf("수학 점수을 입력하시오: ");
        scanf("%d", &list[i].math);
        printf("영어 점수을 입력하시오: ");
        scanf("%d", &list[i].eng);
    }
    for(int i = 0; i < SIZE; i++)
    {
        list[i].avg = (list[i].kor + list[i].math + list[i].eng) / 3;
    }
    for(int i = 0; i < SIZE; i++)
    {
        printf("이름: %s, 평균: %lf\n", list[i].name, list[i].avg);
    }
        
    return 0;
} */


//페이지 6 변형2
/* #define SIZE 2
#include <stdio.h>
struct student{
    int number;
    char name[20];
    //double grade;
    int kor;
    int math;
    int eng;
    double avg;
};
int main(void)
{
    struct student list[SIZE];

    double kme[3];

    for(int i = 0; i < SIZE; i++)
    {
        printf("학번을 입력하시오: ");
        scanf("%d", &list[i].number);
        printf("이름을 입력하시오: ");
        scanf("%s", list[i].name);
        printf("국어 점수을 입력하시오: ");
        scanf("%d", &list[i].kor);
        printf("수학 점수을 입력하시오: ");
        scanf("%d", &list[i].math);
        printf("영어 점수을 입력하시오: ");
        scanf("%d", &list[i].eng);
    }
    for(int i = 0; i < SIZE; i++)
    {
        list[i].avg = (list[i].kor + list[i].math + list[i].eng) / 3;
    }
    for(int i = 0; i < SIZE; i++)
    {
        kme[0] += list[i].kor;
        kme[1] += list[i].math;
        kme[2] += list[i].eng;
    }
    for(int i = 0; i < SIZE; i++)
    {
        printf("이름: %s, 평균: %lf\n", list[i].name, list[i].avg);
    }
    printf("국어 전체 평균 : %lf\n", kme[0]/SIZE);
    printf("수학 전체 평균 : %lf\n", kme[1]/SIZE);
    printf("영어 전체 평균 : %lf\n", kme[2]/SIZE);
        
    return 0;
} */


//페이지 11
/* #include <stdio.h>
struct student {
    int number;
    char name[20];
    double grade;
};
int main()
{
    struct student s = {2007001, "홍길동", 4.3};
    struct student *p;
    p = &s;

    printf("학번=%d 이름=%s 학점=%lf\n", s.number, s.name, s.grade);
    printf("학번=%d 이름=%s 학점=%lf\n", (*p).number, (*p).name, (*p).grade);
    printf("학번=%d 이름=%s 학점=%lf\n", p->number, p->name, p->grade);
    
    return 0;
} */

//페이지 11 (s를 초기화 하지 않고 입력받는 방식)
/* #include <stdio.h>
struct student {
    int number;
    char name[20];
    double grade;
};
int main()
{
    //struct student s = {2007001, "홍길동", 4.3};
    struct student s;
    struct student *p;
    p = &s;

    printf("number = ");
    scanf("%d", &p->number);
    printf("name = ");
    scanf("%s", p->name);
    printf("grade = ");
    scanf("%lf", &p->grade);

    printf("학번=%d 이름=%s 학점=%lf\n", s.number, s.name, s.grade);
    printf("학번=%d 이름=%s 학점=%lf\n", (*p).number, (*p).name, (*p).grade);
    printf("학번=%d 이름=%s 학점=%lf\n", p->number, p->name, p->grade);
    
    return 0;
} */

//페이지 12
/* #include <stdio.h>
struct date {
    int month;
    int day;
    int year;
};
struct student {
    int number;
    char name[20];
    double grade;
    struct date *dob;
};
int main()
{
    struct student s1 = {1111, "홍길동", 4.3};
    struct date d1 = {03, 10, 1999};
    s1.dob = &d1;
    //파생된 구조체 가리키는 법(포인터 이용)

    printf("학번: %d\n", s1.number);
    printf("이름: %s\n", s1.name);
    printf("학점: %lf\n", s1.grade);
    printf("생년월일: %d년 %d월 %d일\n", s1.dob->year, s1.dob->month, s1.dob->day);
    //파생된 구조체 접근법
    
    return 0;
} */

//페이지 12 여러명 입력받아서 출력
/* #include <stdio.h>
#define SIZE 2
struct date {
    int month;
    int day;
    int year;
};
struct student {
    int number;
    char name[20];
    double grade;
    struct date *dob;
};
int main()
{
    struct student s[SIZE];
    struct date d[SIZE];
    for(int i = 0; i < SIZE; i++)
        s[i].dob = &d[i];

    for(int i = 0; i < SIZE; i++)
    {
        printf("number = ");
        scanf("%d", &s[i].number);
        printf("name = ");
        scanf("%s", s[i].name);
        printf("grade = ");
        scanf("%lf", &s[i].grade);

        printf("year = ");
        scanf("%d", &s[i].dob->year);
        printf("month = ");
        scanf("%d", &s[i].dob->month);
        printf("day = ");
        scanf("%d", &s[i].dob->day);

    }
    for(int i = 0; i < SIZE; i++)
    {
        printf("학번: %d\n", s[i].number);
        printf("이름: %s\n", s[i].name);
        printf("학점: %lf\n", s[i].grade);
        printf("생년월일: %d년 %d월 %d일\n", s[i].dob->year, s[i].dob->month, s[i].dob->day);
    }
    
    return 0;
} */

//페이지 15
/* #include <stdio.h>
struct student {
    int number;
    char name[20];
    double grade;
};
int equal(struct student s1, struct student s2);
int main(void)
{
    struct student a = {1, "Kim", 4.3};
    struct student b = {2, "LEe", 4.5};
    
    if(equal(a, b) == 1)
        printf("같은 학생\n");
    else
        printf("다른 학생\n");
       
    return 0;
}
int equal(struct student s1, struct student s2)
{
    if(s1.number == s2.number)
        return 1;
    else
        return 0;
} */


//페이지 16
/* #include <stdio.h>
struct student {
    int number;
    char name[20];
    double grade;
};
int equal(struct student *p1, struct student *p2);
int main(void)
{
    struct student a = {1, "Kim", 4.3};
    struct student b = {2, "LEe", 4.5};
    
    if(equal(&a, &b) == 1)
        printf("같은 학생\n");
    else
        printf("다른 학생\n");
       
    return 0;
}
int equal(struct student *p1, struct student *p2)
{
    if(p1->number == p2->number)
        return 1;
    else
        return 0;
} */

//페이지 17
/* #include <stdio.h>
#include <string.h>
struct student {
    int number;
    char name[20];
    double grade;
};
struct student create() {
    struct student s;
    s.number = 3;
    strcpy(s.name, "Park");
    s.grade = 4.3;
    return s;
}
int main(void)
{
    struct student a = create();
    
    return 0;
}
 */

//페이지 17 여러명
/* #include <stdio.h>
struct student {
    int number;
    char name[20];
    double grade;
};
struct student create(int);
int main(void)
{
    struct student a[10];
    int n;
    printf("몇명의 학생: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        a[i] = create(n);
    
    for(int i = 0; i < n; i++)
        printf("학번=%d 이름=%s 학점=%lf\n", a[i].number, a[i].name, a[i].grade);
       
    return 0;
}
struct student create(int n)
{
    struct student s;
    printf("학번 이름 학점을 넣어주세요\n");
    scanf("%d %s %lf", &s.number, s.name, &s.grade);

    return s;
} */


//페이지 18
/* #include <stdio.h>
struct vector {
    double x;
    double y;
};
struct vector get_vector_sum(struct vector a, struct vector b);
int main()
{
    struct vector a = {2.0, 3.0};
    struct vector b = {5.0, 6.0};
    struct vector sum;

    sum = get_vector_sum(a, b);
    printf("벡터의 합은 (%lf, %lf)입니다.\n", sum.x, sum.y);

    return 0;

}
struct vector get_vector_sum(struct vector a, struct vector b)
{
    struct vector result;

    result.x = a.x + b.x;
    result.y = a.y + b.y;

    return result;
} */

/* #include <stdio.h>
struct vector {
    double x;
    double y;
};
struct vector get_vector_sum(struct vector *, struct vector *, struct vector *);//포인터 함수원형 적을때 *만 있으면 됨
int main()
{
    struct vector a = {2.0, 3.0}, b = {5.0, 6.0}, c;
    get_vector_sum(&a, &b, &c);

    printf("벡터의 합은 (%.1lf, %.1lf)입니다.\n", c.x, c.y);

    return 0;

}
struct vector get_vector_sum(struct vector *s1, struct vector *s2, struct vector *s3)
{
    s3->x = s1->x + s2->x;
    s3->y = s1->y + s2->y;
} */


/* #include <stdio.h>
typedef struct vector {
    double x;
    double y;
}POINT;
void get_vector_sum(POINT *, POINT *, POINT *);
int main()
{
    POINT a = {2.0, 3.0}, b = {5.0, 6.0}, c;
    get_vector_sum(&a, &b, &c);

    printf("벡터의 합은 (%.1lf, %.1lf)입니다.\n", c.x, c.y);

    return 0;
}
void get_vector_sum(POINT *s1, POINT *s2, POINT *s3)
{
    
    s3->x = s1->x + s2->x;
    s3->y = s1->y + s2->y;

} */


//페이지 25
/* #include <stdio.h>
typedef struct point {
    int x;
    int y;
}POINT;
POINT translate(POINT p, POINT delta);
int main(void)
{
    POINT p = {2, 3};
    POINT delta = {10, 10};
    POINT result;

    result = translate(p, delta);
    printf("새로운 점의 좌표는 (%d, %d)입니다.\n", result.x, result.y);

    return 0;
}
POINT translate(POINT p, POINT delta)
{
    POINT new_p;

    new_p.x = p.x + delta.x;
    new_p.y = p.y + delta.y;

    return new_p;
} */

//페이지 28
/* #include <stdio.h>
struct student {
    int number;
    char name[10];
    double grade;
};
struct student list[] = {
    {2012011, "홍길동", 4.2},
    {2012012, "김철수", 3.2},
    {2012013, "김영희", 3.9},
};
int main(void)
{
    struct student super_stu;
    int size = sizeof(list)/ sizeof(list[0]);
    
    for(int i = 0; i < size; i++)
    {
        if(list[i].grade > super_stu.grade)
            super_stu = list[i];
    }
    printf("평점이 가장 높은 학생은 (이름%s, 학번%d, 평점%lf)입니다.\n", super_stu.name, super_stu.number, super_stu.grade);

    return 0;
} */