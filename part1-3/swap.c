#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int x, y, dump;
	int sel;

	printf("��ȯ�� �� ������ �Է��ϼ���. >>");
	scanf_s("%d %d", &x, &y);
	printf("\n�Է��� �� ��: x = %d and y = %d\n\n", x, y);

	printf(" �ӽ� ���� ���   �̿� ���[1]\n");
	printf(" ������ ��������  ��ȯ ���[2]\n");
	printf(" ������ ���������� ��ȯ ���[3]\n");
	printf(" XOR ������ ^     �̿� ���[4]\n\n");

	printf("�� ��ȯ ��� �� �� ��ȣ�� �����ϼ���. >>");
	scanf_s("%d", &sel);

	switch (sel)
	{
	case 1:
	{
		dump = x;
		x = y;
		y = dump;
		break;
	}
	case 2:
	{
		x = x + y;
		y = x - y;  //[ (x + y) - y ]
		x = x - y;  //[ (x + y) - x ]
		break;
	}
	case 3:
	{
		x = x * y;
		y = x / y;  //[ (x * y) / y ]
		x = x / y;  //[ (x * y) / x ]
		break;
	}
	case 4:
	{
		x = x ^ y;
		y = x ^ y;  //[ (x ^ y) ^ y ] == [ x ^ (y ^ y) ] == [x ^ 0] == [ x ]
		x = x ^ y;  //[ (x ^ y) ^ x ] == [ (y ^ x) ^ x ] == [y ^ (x ^ x) ] == [y ^ 0] == [ y ]
		break;
	}
	}
	printf("\n��ȯ�� �� ��: x = %d and y = %d\n", x, y);

	return 0;
}