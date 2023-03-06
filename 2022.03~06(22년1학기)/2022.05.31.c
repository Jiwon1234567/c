/* #include <stdio.h>
#define SIZE 10
int main(void)
{
    int a[SIZE][SIZE] = {0};
    int b[SIZE][SIZE] = {0};
    int i, j;
    int m, n;
    printf("행렬의 행과 열: ");
    scanf("%d %d", &m, &n);
    printf("행렬의 요소를 입력하라.\n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf(" %d", &a[i][j]);
        }
    }
    for(i = m - 1; i >= 0; i--)
    {
        for(j = n - 1; j >= 0; j--)
        {
            b[j][i] = a[i][j];          //b의 ij 순서 생각
        }
    }
    printf("전치 행렬은 다음과 같다.\n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    return 0;
} */

#include <stdio.h>      //시험나옴 왕중요!!!!!!!!!!!!!
#define SIZE 10
int main(void)
{
    char username[SIZE], password[SIZE], ch;
    int i;
    printf("사용자 아이디: ");
    scanf("%s", username); //scanf("%s", username); %s만 scanf때 &안넣어도됨
    //gets(username);도 가능
    printf("패스워드(8글자): ");
    for(i = 0; i < 8; i++)
    {
        ch = getch();
        password[i] = ch;
        printf("*");
    }
    password[i] = '\0'; // \0이랑 NULL이랑 같은 역할 -> 배열이 끝났다는 말
    //password[i] = NULL도 가능
    printf("\n당신의 패스워드는 :");
    for(i = 0; i < 8; i++)
        printf("%c", password[i]);
    //printf("%s", password);
    return 0;
}