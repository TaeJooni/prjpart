#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int in;
	int x;
	int y;


	printf("[1] ��Ʈ AND(&)\n[2] ��Ʈ OR(|)\n[3] ��Ʈ XOR(^)\n[4] ��Ʈ COMPLEMENT(~)\n[0] ���� (stop)\n\n�� ���� �� �ϳ��� �����ϼ���. >> ");
	scanf("%d", &in);
	

	switch (in) {
	
	case 1:
		printf("��Ʈ ������ �� ���� �Է� >> \n");
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
		printf("��Ʈ ������ �� ���� �Է� >> \n");
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
		printf("��Ʈ ������ �� ���� �Է� >> ");
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
		printf("��Ʈ ����(~) ������ ���� �Է� >> ");
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
		printf("����(stop)\n");
		break;

	default:
		printf("��ȣ�� �߸� �����߽��ϴ�.\n");

	}

	return 0;
}