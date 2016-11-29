#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int in;
	int x;
	int y;


	printf("[1] 비트 AND(&)\n[2] 비트 OR(|)\n[3] 비트 XOR(^)\n[4] 비트 COMPLEMENT(~)\n[0] 종료 (stop)\n\n위 연산 중 하나를 선택하세요. >> ");
	scanf("%d", &in);
	

	switch (in) {
	
	case 1:
		printf("비트 연산할 두 정수 입력 >> \n");
		scanf("%d%d", &x, &y);
		for (int i = 31; i >= 0; i--)
		{
			printf("%d", ((x >> i) & 1) ? 1 : 0);
		}
		printf("   %d \n\n", x);
		for (int i = 31; i >= 0; i--)
		{
			printf("%d", ((y >> i) & 1) ? 1 : 0);
		}
		printf("   %d \n\n", y);
		for (int i = 31; i >= 0; i--)
		{
			printf("%d", (((x & y) >> i) & 1) ? 1 : 0);
		}
		printf("   %d \n", (x&y));
		break;
	
	case 2:
		printf("비트 연산할 두 정수 입력 >> \n");
		scanf("%d%d", &x, &y);
		for (int i = 31; i >= 0; i--)
		{
			printf("%d", ((x >> i) & 1) ? 1 : 0);
		}
		printf("   %d \n\n", x);
		for (int i = 31; i >= 0; i--)
		{
			printf("%d", ((y >> i) & 1) ? 1 : 0);
		}
		printf("   %d \n\n", y);
		for (int i = 31; i >= 0; i--)
		{
			printf("%d", (((x | y) >> i) & 1) ? 1 : 0);
		}
		printf("   %d \n", (x|y));
		break;

	case 3:
		printf("비트 연산할 두 정수 입력 >> ");
		scanf("%d%d", &x, &y);
		for (int i = 31; i >= 0; i--)
		{
			printf("%d", ((x >> i) & 1) ? 1 : 0);
		}
		printf("   %d \n\n", x);
		for (int i = 31; i >= 0; i--)
		{
			printf("%d", ((y >> i) & 1) ? 1 : 0);
		}
		printf("   %d \n\n", y);
		for (int i = 31; i >= 0; i--)
		{
			printf("%d", (((x ^ y) >> i) & 1) ? 1 : 0);
		}
		printf("   %d \n", (x^y));
		break;
	
	case 4:
		printf("비트 보수(~) 연산할 정수 입력 >> ");
		scanf("%d", &x);
		for (int i = 31; i >= 0; i--)
		{
			printf("%d", ((x >> i) & 1) ? 1 : 0);
		}
		printf(" \n\n");
		for (int i = 31; i >= 0; i--)
		{
			printf("%d", ((~x >> i)& 1) ? 1 : 0);
		}
		printf("   %d \n\n", ~x);
		break;
	
	case 0:
		printf("종료(stop)\n");
		break;

	default:
		printf("번호를 잘못 선택했습니다.\n");

	}

	return 0;
}