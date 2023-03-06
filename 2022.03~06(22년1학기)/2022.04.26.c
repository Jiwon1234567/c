#include <stdio.h>
/*int main(void)	//switch문과 if-else문 서로 바꾸는 문제 나올 수 있음
{
	int number;
	printf("정수를 입력하시오: ");
	scanf("%d", &number);
	switch (number)
	{
		case 0:
			printf("없음\n");
			break;
		case 1:
			printf("하나\n");
			break;
		case 2:
			printf("둘\n");
			break;
		default:
			printf("많음\n");
			break;
	}
	return 0;
}
*/

/*int main(void) //오늘 한거 중에 1문제 그대로 나옴
{
	int month, days;
	printf("달을 입력하시오: ");
	scanf("%d", &month);
	switch (month)
	{
		case 2:
			days = 28;
			break;
		case 4:
		case 6:
		case 8:
		case 10:
		case 12:
			days = 31;
			break;
		default:
			days = 30;
	}
	printf("%d월의 일수는 %d입니다.", month, days);

	return 0;
}*/

/*int main(void)
{
	int a, b, x;
	char c;
	printf("수식을 입력하시오\n");
	printf("<예: 2 + 5>\n");
	printf(">>");
	scanf("%d %c %d", &a, &c, &b);
	switch (c)
	{
		case '+':
			x = a + b;
			break;
		case '-':
			x = a - b;
			break;
		case '*':
			x = a * b;
			break;
		case '/':
			x = a / b;
			break;
		case '%':
			x = a % b;
			break;
	}
	printf("%d %c %d = %d", a, c, b, x);

	return 0;
}*/

/*int main(void)  
{
	char grade;
	printf("학점을 입력하시오: ");
	scanf("%c", &grade);
	switch (grade)
	{
		case 'A':
			printf("Excellent");
			break;
		case 'B':
		case 'C':
			printf("Good");
			break;
		case 'D':
			printf("Poor");
			break;
		case 'F':
			printf("Fail");
			break;
		default:
			printf("잘못된 입력입니다.");
			break;
	}
	return 0;
}*/


/*int main(void)  //91~100:A, 81~90:B 
{
	int grade;
	printf("학점을 입력하시오: ");
	scanf("%d", &grade);
	switch ((grade - 1) / 10)
	{
		case 9:
			printf("A");
			break;
		case 8:
			printf("B");
			break;
		case 7:
			printf("C");
			break;
		case 6:
			printf("D");
			break;
		case 5:
			printf("F");
			break;
		default:
			printf("잘못된 입력입니다.");
			break;
	}
	return 0;
}*/

/*int main(void)
{
	char color;
	printf("신호등의 색깔 입력 (R, G, Y): ");
	scanf("%c", &color);
	switch (color)
	{
	case 'r':
	case 'R':
		printf("정지");
		break;
	case 'g':
	case 'G':
		printf("진행");
		break;
	case 'y':
	case 'Y':
		printf("주의");
		break;
	}
	return 0;
}*/

/*int main(void)
	char alphabet;
{
	printf("글자를 입력하시오: ");
	scanf("%c", &alphabet);
	switch (alphabet)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("%c은 모음입니다.", alphabet);
			break;
		default:
			printf("%c은 자음입니다.", alphabet);
			break;
	}
	return 0;
}*/

/*int main(void)
{
	int a;
	printf("요일 번호를 입력하시오: ");
	scanf("%d", &a);
	switch (a)
	{
	case 1:
		printf("Sunday");
		break;
	case 2:
		printf("Monday");
		break;
	case 3:
		printf("Tuesday");
		break;
	case 4:
		printf("Wednesday");
		break;
	case 5:
		printf("Thursday");
		break;
	case 6:
		printf("Friday");
		break;
	case 7:
		printf("Saturday");
		break;
	}
	return 0;
}*/



