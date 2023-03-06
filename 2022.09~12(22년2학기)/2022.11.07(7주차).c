//6주차 페이지29 암호 강인성 조사
/* #include <stdio.h>
#include <string.h>
int main()
{
    char pw[30];
    int up, low, num;

    while(1)
    {
        printf("암호를 생성하시오: ");
        scanf("%s", pw);
        up = low = num = 0;
        for(int i = 0; i < strlen(pw); i++)
        {
            if(pw[i] >= 'a' && pw[i] <= 'z')
                low = 1;
            if(pw[i] >= 'A' && pw[i] <= 'Z')
                up = 1;
            if(pw[i] >= '0' && pw[i] <= '9')
                num = 1;
        }
        if(up == 1 && low == 1 && num == 1)
        {
            printf("적정한 암호입니다.\n");
            break;
        }
        else
            printf("숫자, 소문자, 대문자를 섞어서 암호를 다시 만드세요!\n");
    }
    return 0;
} */

//페이지 5
/* #include <stdio.h>
int main()
{
    int ch;     //ch가 정수형
    while(1)
    {
        ch = getchar();
        if(ch == EOF)
            break;
        putchar(ch);
    }
    return 0;
} */

//페이지 9 예제
/* #include <stdio.h>
#include <string.h>
int main(void)
{
    char name[100];
    char address[100];
    printf("이름을 입력하시오: ");
    gets(name);
    printf("현재 거주하는 주소를 입력하시오: ");
    gets(address);
    puts(name);
    puts(address);
    return 0;
} */

//페이지 15 단어 한문장으로 붙이기
/* #include <stdio.h>
#include <string.h>
int main()
{
    char string[80];

    strcpy(string, "Hello world from ");
    strcat(string, "strcpy ");
    strcat(string, "and ");
    strcat(string, "strcat!");
    printf("string = %s\n",string);

    return 0;
} */


//!이랑 != 0이랑 같음
/* #include <stdio.h>
#include <string.h>
int main(void)
{
    char a[100], b[100];
    printf("첫번째 문자열을 입력하시오: ");
    gets(a);

    printf("두번째 문자열을 입력하시오: ");
    gets(b);

    if(! strcmp(a, b))  // = if(strcmp(a, b) == 0)
        printf("문자열이 일치합니다.\n");
    else
        printf("문자열이 일치하지 않습니다.\n");

    return 0;
} */


//페이지 18 메세지 암호화(시험에 나옴)
/* #include <stdio.h>
void encrypt(char cipher[], int shift);
int main(void)
{
    char cipher[50];
    int shift = 3;//시험에 나오면 4로 바꾸거나 함
    printf("문자열을 입력하시오: ");
    gets(cipher);
    encrypt(cipher, shift);
    return 0;
}
void encrypt(char cipher[], int shift)
{
    int i = 0;
    while(cipher[i] != '\0')
    {
        if(cipher[i] >= 'a' && cipher[i] <= 'z')//또는 대문자, 숫자 암호화
        {
            cipher[i] += shift;
            if(cipher[i] > 'z')
                cipher[i] -= 26;
        }
        i++;
    }
    printf("암호화된 문자: %s", cipher);
} */

//페이지 24 소문자를 대문자로 변경
/* #include <stdio.h>
#include <ctype.h>
int main()
{
    int c;
    
    while((c = getchar()) != EOF)
    {
        if(islower(c))
            c = toupper(c);
        putchar(c);
    }
    return 0;
} */

//페이지 25 단어수 세기
/* #include <stdio.h>
#include <ctype.h>
int count_word(char *);
int main()
{
    int wc = count_word("the book is two");
    printf("단어의 개수: %d\n", wc);

    return 0;
}
int count_word(char *s)
{
    int count = 1;
    for(int i = 0; s[i] != '\0'; i++)
    {
        if(isalpha(s[i]) == 0)
            count++;
    }
    return count;
} */

/*
int count_word(char *s)
{
    int i, wc = 0, waiting = 1;
    for(i = 0; i != '\0'; i++)
    {
        if(isalpha(s[i]))
        {
            if(waiting)
            {
                wc++;
                waiting = 0;
            }
        }
        else
            waiting = 0;
    }
    return wc;
}
*/


//페이지 29 문자열 토큰 분리
/* #include <stdio.h>
#include <string.h>

char s[] = "Man is immortal, because he has a soul";
char seps[] = " ,\t\n";     //띄어쓰기도 꼭 넣기
char *token;

int main()
{
    token = strtok(s, seps);
    while(token != NULL)
    {
        printf("토큰: %s\n", token);
        token = strtok(NULL, seps);
    }
    return 0;
} */