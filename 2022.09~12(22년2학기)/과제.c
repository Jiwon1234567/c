#include <stdio.h>
#include <string.h>
#define SIZE1 4
#define SIZE2 5
enum menu_name {세트, 버거, 디저트, 음료};
char *menu_names[] = {"세트메뉴", "버거메뉴", "디저트메뉴", "음료메뉴"};
struct menu {
    int number;
    char name[30];
    int price;
};
struct menu list[SIZE1][SIZE2] = {
    {
        {10, "빅맥세트", 6200},
        {11, "슈슈버거세트", 6000},
        {12, "슈비버거세트", 7400},
        {13, "치즈버거세트", 4700},
        {14, "맥치킨세트", 4900}
    },
    {
        {20, "빅맥", 4900},
        {21, "슈슈버거", 4700},
        {22, "슈비버거", 5800},
        {23, "치즈버거", 2500},
        {24, "맥치킨", 3500}
    },
    {
        {30, "해쉬브라운", 1100},
        {31, "코울슬로", 1900},
        {32, "치즈스틱", 2500},
        {33, "콘샐러드", 1800},
        {34, "스낵랩", 2400}
    },
    {
        {40, "콜라", 1500},
        {41, "사이다", 1500},
        {42, "쉐이크", 2800},
        {43, "우유", 1500},
        {44, "아메리카노", 2000}
    }
};
struct menu_count {
    int count;
};
void print_menu(void);
void select(void);
void print_detail(int, int);
int main()
{
    print_menu();
    select();
    
    return 0;
}
void print_menu(void)
{   
    for(int i = 0; i < SIZE1; i += 2)
    {
        printf("%s\t\t", menu_names[i]);
        printf("%s\n", menu_names[i + 1]);
        for(int j = 0; j < SIZE2; j++)
            print_detail(i, j);
        printf("\n");
    }
}
void print_detail(int i, int j)
{
    printf("%d%s\t", list[i][j].number, list[i][j].name);
    if(strlen(list[i][j].name) <= 6)
        printf("\t");
    printf("%5d\t", list[i][j].price);
    printf("%d%s\t", list[i + 1][j].number, list[i + 1][j].name);
    if(strlen(list[i + 1][j].name) <= 6)
        printf("\t");
    printf("%5d\n", list[i + 1][j].price);
}
void select(void)
{
    int sum = 0;
    int select_menu, select_num, select_count;
    int cancel_num, cancel_count;
    struct menu_count num[SIZE1][SIZE2] = {0};

    while(1)
    {
        int temp = 0, receive_money;

        printf("지불할 총액 : \t%5d\n\n", sum);

        printf("1. 추가 2. 취소 3. 입력종료\n");
        printf("번호 선택 후 Enter :");
        scanf("%d", &select_menu);

        if(select_menu == 1)
        {
            printf("메뉴번호 입력후 Enter :");
            scanf("%d", &select_num);
            printf("수량 입력후 Enter :");
            scanf("%d", &select_count);
            printf("\n");
            num[select_num / 10 - 1][select_num % 10].count += select_count;
        }
        else if(select_menu == 2)
        {
            printf("취소할 메뉴번호 입력후 Enter :");
            scanf("%d", &cancel_num);
            printf("취소할 수량 입력후 Enter :");
            scanf("%d", &cancel_count);
            printf("\n");
            num[cancel_num / 10 - 1][cancel_num % 10].count -= cancel_count;
        }
        else if(select_menu == 3)
        {
            printf("==============================================\n");
            printf("상품(코드)\t단가\t수량\t금액\n");
            printf("----------------------------------------------\n");
            for(int i = 0; i < SIZE1; i++)
            {
                for(int j = 0; j < SIZE2; j++) 
                    if(num[i][j].count >= 1)
                    {
                        printf("%d%s\t", list[i][j].number, list[i][j].name);
                        if(strlen(list[i][j].name) <= 6)
                            printf("\t");
                        printf("%5d\t%d\t%5d\n", list[i][j].price, num[i][j].count, list[i][j].price * num[i][j].count);
                    }
            }
            printf("----------------------------------------------\n");
            printf("받은 금액: ");
            scanf("%d", &receive_money);
            printf("잔돈: %d\n", receive_money - sum);
            break;
        }
        
        for(int i = 0; i < SIZE1; i++)
        {
            for(int j = 0; j < SIZE2; j++) 
                temp += list[i][j].price * num[i][j].count;
        }
        sum = temp;
    }
}