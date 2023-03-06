//9주차 페이지 15 점들 간의 거리 계산
#include <stdio.h>
#include <math.h>
struct point
{
    int x;
    int y;
};
int main(void)
{
    struct point p1, p2;

    p1.x = 10;
    p1.y = 20;

    p2.x = 30;
    p2.y = 40;

    printf("첫 번째 점의 좌표: %d %d\n", p1.x, p1.y);
    printf("두 번째 점의 좌표: %d %d\n", p2.x, p2.y);
    
    double dist = fabs(sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2)));
    //fabs: double형의 절대값 -> <math.h>
    //abs: int형의 절대값 -> <stdlib.h>
    
    printf("거리는 %lf입니다.\n", dist);

    return 0;
}


//페이지 17
#include <stdio.h>
#include <string.h>
struct student {
    int number;
    char name[10];
    double grade;
};
int main(void)
{
    struct student s1;
    s1.number = 32928;
    s1.grade = 4.3;
    strcpy(s1.name, "홍길동");

    return 0;
}

//name[10] 포인터 안쓰면 strcpy써야되고
//*name[10] 포인터로 쓰면 대입문 가능


#include <stdio.h>
#include <string.h>
struct student {
    int number;
    char name[10];
    double grade;
};
int main(void)
{
    struct student s1, s2;
    
    scanf("%d %s %lf", &s1.number, s1.name, &s1.grade);
    printf("%d %s %.lf", s1.number, s1.name, s1.grade);

    return 0;
}


#include <stdio.h>
#include <string.h>
struct student {
    int number;
    char name[10];
    double grade;
};
int main(void)
{
    struct student s1, s2;
    
    printf("학번을 넣어주세요: ");
    scanf("%d", &s1.number);
    printf("이름을 넣어주세요: ");
    scanf("%d", s1.name);
    printf("학점을 넣어주세요: ");
    scanf("%d", &s1.grade);
    
    printf("학번을 넣어주세요: ");
    scanf("%d", &s2.number);
    printf("이름을 넣어주세요: ");
    scnaf("%d", s2.name);
    printf("학점을 넣어주세요: ");
    scanf("%d", &s2.grade);

    return 0;
}


//페이지 20 주소록
#include <stdio.h>
struct employee{
    char name[20];
    int age;
    char address[20];
    int salary;
};
int main(void)
{
    struct employee p1;
    
    printf("이름을 입력하시오: ");
    scanf("%s", p1.name);
    printf("나이를 입력하시오: ");
    scanf("%d", &p1.age);
    printf("주소를 입력하시오: ");
    getchar();
    gets(p1.address);       //gets가 엔터를 먹어버려서 앞에 getchar()를 두면 getchar가 엔터를 먹고 gets는 정상적으로 실행된다.
    printf("월급을 입력하시오: ");
    scanf("%d", &p1.salary);

    return 0;
}


#include <stdio.h>
struct date{
    int year;
    int month;
    int day;
};
struct student{
    int number;
    char name[10];
    struct date dob;
    double grade;
};
int main(void)
{
    struct student s1;
    printf("년도를 입력하세요: ");
    scanf("%d", &s1.dob.year);
    printf("월을 입력하세요: ");
    scanf("%d", &s1.dob.month);
    printf("일을 입력하세요: ");
    scanf("%d", &s1.dob.day);

    printf("학번을 입력하세요: ");
    scanf("%d", &s1.number);
    printf("이름을 입력하세요: ");
    scanf("%s", s1.name);
    printf("점수를 입력하세요: ");
    scanf("%lf", &s1.grade);

    printf("생년월일: %d/%d/%d\n", s1.dob.year, s1.dob.month, s1.dob.day);
    printf("학번 = %d\n", s1.number);
    printf("이름 = %s\n", s1.name);
    printf("점수 = %lf\n", s1.grade);

    return 0;
}


//페이지 24 사각형을 point구조체로 나타내기
#include <stdio.h>
struct point {
    int x;
    int y;
};
int main(void)
{
    struct point p1, p2;
    
    printf("왼쪽 상단의 좌표를 입력하시오: ");
    scanf("%d %d", &p1.x, &p1.y);
    printf("오른쪽 하단의 좌표를 입력하시오: ");
    scanf("%d %d", &p2.x, &p2.y);

    int area = (p2.x - p1.x) * (p2.y - p1.y);
    int peri = ((p2.x - p1.x) + (p2.y - p1.y)) * 2;

    printf("면적은 %d이고 둘레는 %d입니다.\n", area, peri);

    return 0;
}


//페이지 24 사각형을 point 구조체로 나타내기
#include <stdio.h>
#include <stdlib.h>
struct point{
    int x;
    int y;
};
int main(void)
{   
    struct point p1, p2;
    printf("왼쪽 상단의 좌표를 입력하시오: ");
    scanf("%d %d", &p1.x, &p1.y);
    printf("왼쪽 상단의 좌표를 입력하시오: ");
    scanf("%d %d", &p2.x, &p2.y);
    
    printf("면적은 %d이고 둘레는 %d입니다.\n", abs(p2.x - p1.x) * abs(p2.y - p1.y), (abs(p2.x - p1.x) + abs(p2.y - p1.y)) * 2);

    return 0;
}



#include <stdio.h>
//#include <math.h>
#include <stdlib.h>
struct point {
    int x;
    int y;
};
int main(void)
{
    struct point p1, p2;
    
    printf("왼쪽 상단의 좌표를 입력하시오: ");
    scanf("%d %d", &p1.x, &p1.y);
    printf("오른쪽 하단의 좌표를 입력하시오: ");
    scanf("%d %d", &p2.x, &p2.y);

    int area = abs((p2.x - p1.x) * (p2.y - p1.y));
    int peri = abs(((p2.x - p1.x) + (p2.y - p1.y)) * 2);///절대값(abs)사용 <math.h>

    printf("면적은 %d이고 둘레는 %d입니다.\n", area, peri);

    return 0;
}