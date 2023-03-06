#include <stdio.h>
//#include <string.h>
int main(void)
{
   int i, j, num;
   int sum = 0;
   double avg = 0;
   int korean[3];
   int *score = &korean[0];
   
   do
   {
      printf("\n********************\n");
      printf("성적처리 프로그램\n");
      printf("********************\n");
      printf("1. 성적 입력\n");
      printf("2. 성적 출력\n");
      printf("3. 종료\n");
      printf("---------------------\n");
      printf("작업을 선택하세요(1 ~ 3) : ");
      scanf("%d", &num);
      
      if(num == 1)
      {
         printf("\n");
         for(j = 1; j <= 3; j++)
         {
            printf("국어%d 성적을 입력하세요 : ", j);
            scanf("%d", &score[j]);
         }
         printf("\n");
      }         
      else if(num == 2)
         {
            printf("\n");
            for(j = 1; j <= 3; j++)
            {
               printf("국어 %d : %d\n", j, score[j]);
               sum += score[j];
            }
            avg = sum / 3;
            printf("총점 : %d\n", sum);
            printf("평균 : %f\n", avg);
            printf("\n");            
         }
   } while (num != 3);

   printf("프로그램을 종료합니다.\n");
   
   return 0;
}