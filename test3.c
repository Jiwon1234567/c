#include <stdio.h>
#include <math.h>
//#include <stdlib.h>
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

    int area = ((p2.x - p1.x) * (p2.y - p1.y));
    int peri = (((p2.x - p1.x) + (p2.y - p1.y)) * 2);///절대값(abs)사용

    printf("면적은 %d이고 둘레는 %d입니다.\n", abs(area), peri);

    return 0;
}