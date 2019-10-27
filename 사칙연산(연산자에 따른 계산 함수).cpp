#include<stdio.h>

int main(void)
{
	int num1, num2;
	char ham;

	printf("수식 입력(예: 10+20) : ");
	scanf("%d %c %d", &num1, &ham, &num2);

	switch (ham)
	{
	case '+':
		printf("%d %c %d=%d", num1, ham, num2, num1 + num2);
		break;
	case '-':
		printf("%d %c %d=%d", num1, ham, num2, num1 - num2);
	case '*':
		printf("%d %c %d=%d", num1, ham, num2, num1 * num2);
	case '/':
		if (num2 == 0)
		{
			printf("Error:나눗셈 입력 오류!!!");
			break;
		}
		else
			printf("%d %c %d=%d", num1, ham, num2, num1 / num2);
		break;
	default:
		printf("정확한 수식을 입력해주십시오!");
	}
	return 0;
}
