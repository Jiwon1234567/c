//페이지 14
/* #include <stdio.h>
int main()
{
   FILE *fp;
   fp = fopen("/Users/jiwon/Documents/VsCode/c/sample.txt", "w");

   if(fp == NULL)
      printf("파일 열기 실패\n");
   else
      printf("파일 열기 성공\n") ;
   fclose(fp);
   return 0;
} */

//페이지 18
/* #include <stdio.h>
int main()
{
   FILE *fp = NULL;
   fp = fopen("/Users/jiwon/Documents/VsCode/c/sample.txt", "w");

   if(fp == NULL)
   {
      printf("파일 열기 실패\n");
      return 1;
   }

   fputc('a', fp);
   fputc('b', fp);
   fputc('c', fp);
   fclose(fp);
   return 0;
} */

//페이지 19
/* #include <stdio.h>
int main()
{
    FILE *fp = NULL;
    int c;
    fp = fopen("/Users/jiwon/Documents/VsCode/c/sample.txt", "r");
    
    if(fp == NULL)
    {
        printf("파일 열기 실패\n");
        return 1;
    }
    while((c = fgetc(fp)) != EOF)
        putchar(c);
    fclose(fp);
    return 0;
} */


//페이지 21
/* #include <stdio.h>
int main()
{
    FILE *fp = NULL;
    fp = fopen("/Users/jiwon/Documents/VsCode/c/sample.txt", "w");
    
    if(fp == NULL)
    {
        printf("파일 열기 실패\n");
        return 1;
    }

    fputs("This is a test.\n", fp);
    fputs("This is a sample.\n", fp);
    
    fclose(fp);
    return 0;
} */


/* #include <stdio.h>
int main()
{
    FILE *fp = NULL;
    char s[100], s1[100];
    fp = fopen("/Users/jiwon/Documents/VsCode/c/sample.txt", "w");
    
    if(fp == NULL)
    {
        printf("파일 열기 실패\n");
        return 1;
    }
    printf("첫번째 문장을 넣어주세요: ");
    scanf("%s", s); //= gets(s);
    printf("두번째 문장을 넣어주세요: ");
    scanf("%s", s1); //= gets(s1);
    
    fputs(s, fp);
    fputs("\n", fp);
    fputs(s1, fp);
    
    fclose(fp);
    return 0;
} */

//페이지 23
/* #include <stdio.h>
int main()
{
    FILE *fp = NULL;
    char line[100];
    fp = fopen("/Users/jiwon/Documents/VsCode/c/sample.txt", "r");
    if(fp == NULL)
    {
        printf("파일 열기 실패\n");
        return 1;
    }
    while(fgets(line, 100, fp) != NULL)
        puts(line);
    
    fclose(fp);
    return 0;
} */

//페이지 24 (문자 하나씩)
/* #include <stdio.h>
int main()
{
    FILE *fp1, *fp2;
    int c;
    fp1 = fopen("/Users/jiwon/Documents/VsCode/c/sample.txt", "r");
    fp2 = fopen("/Users/jiwon/Documents/VsCode/c/sample1.txt", "w");
    if(fp1 == NULL || fp2 == NULL)
    {
        printf("파일 열기 실패\n");
        return 1;
    }
    while((c = fgetc(fp1)) != EOF)
        fputc(c, fp2);
    
    fclose(fp1);
    fclose(fp2);
    return 0;
} */

//페이지 24(문장 단위로)
/* #include <stdio.h>
int main()
{
    FILE *fp1, *fp2;
    char c[100];
    
    fp1 = fopen("/Users/jiwon/Documents/VsCode/c/sample.txt", "r");
    fp2 = fopen("/Users/jiwon/Documents/VsCode/c/sample1.txt", "w");
    if(fp1 == NULL || fp2 == NULL)
    {
        printf("파일 열기 실패\n");
        return 1;
    }
    while(fgets(c, 100, fp1) != NULL)
        fputs(c, fp2);
    
    fclose(fp1);
    fclose(fp2);
    return 0;
} */

//페이지 27
/* #include <stdio.h>
int main()
{
    FILE *fp;
    int c;
    
    fp = fopen("/Users/jiwon/Documents/VsCode/c/sample.txt", "a");
    
    if(fp == NULL)
    {
        printf("파일 열기 실패\n");
        return 1;
    }
    while((c = getchar()) != EOF)
        fputc(c, fp);
    
    fclose(fp);
    return 0;
} */


//페이지 29
/* #include <stdio.h>
int main()
{
    FILE *fp;
    
    int number = 20;
    double grade = 4.3;
    char name[] = "홍길동";
    
    fp = fopen("/Users/jiwon/Documents/VsCode/c/sample.txt", "w");
    
    if(fp == NULL)
    {
        printf("파일 열기 실패\n");
        return 1;
    }
    fprintf(fp, "%s \n", name);
    fprintf(fp, "%d \n", number);
    fprintf(fp, "%lf \n", grade);
    fclose(fp);
    return 0;
} */


//페이지 30
/* #include <stdio.h>
int main()
{
    FILE *fp;
    
    int number;
    double grade;
    char name[100];
    
    fp = fopen("/Users/jiwon/Documents/VsCode/c/sample.txt", "r");
    
    if(fp == NULL)
    {
        printf("파일 열기 실패\n");
        return 1;
    }

    fscanf(fp, "%s", name);
    fscanf(fp, "%d", &number);
    fscanf(fp, "%lf", &grade);
    printf("%s\n", name);
    printf("%d\n", number);
    printf("%lf\n", grade);
    fprintf(stdout, "%s \n", name);
    fprintf(stdout, "%d \n", number);
    fprintf(stdout, "%lf \n", grade);
    fclose(fp);
    return 0;
} */


//ppt에 없는 문제(숫자 불러와서 평균 출력)
/* #include <stdio.h>
int main()
{
    FILE *fp1, *fp2;
    
    int count = 0, sum = 0, c;
    int number[100];
    double avg;
    
    fp1 = fopen("/Users/jiwon/Documents/VsCode/c/sample.txt", "r");
    fp2 = fopen("/Users/jiwon/Documents/VsCode/c/sample1.txt", "w");
    
    if(fp1 == NULL || fp2 == NULL)
    {
        printf("파일 열기 실패\n");
        return 1;
    }
    int i = 0;
    while(fscanf(fp1, "%d", &number[i]) != EOF)
    {
        putchar(c);
        i++;
        count++;
    }
    for(int j = 0; j < count; j++)
    {
        sum += number[j];
        fprintf(fp2, "%d ", number[j]);
    }
    
    avg = (double)sum / (double)count;
    fprintf(fp2, "\n평균: %lf", avg);
    
    fclose(fp1);
    fclose(fp2);
    return 0;
} */