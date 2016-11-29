#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int num1, num2;
	float leng1 =1;

	printf("다음 단위에서  [변환할 단위]   -->   [변환결과 단위]로 연산합니다.\n\n");
	printf(" [1] 미터(m)  [2] 인치(in)  [3] 피트(ft)  [4] 야드(yd)  [0] 종료(stop)\n\n");
	printf("[이전단위]  -->  [변환단위], 두 개의 메뉴 번호를 선택하세요.  >> ");
	scanf_s("%d %d", &num1, &num2);

	while (num1 != 0 && leng1 !=0)
	{
		printf("\n[변환할 단위]의 길이를 입력하세요.  >> ");
		scanf_s("%f", &leng1);
		if (leng1 == 0)
			break;

		if (num1 == 1)
			switch (num2)
			{
			case 2: printf("\n [결과]  %.2f(미터) --> %.2f(인치)\n\n", leng1, (leng1 * 39.37));
				break;
			case 3: printf("\n [결과]  %.2f(미터) --> %.2f(피트)\n\n", leng1, (leng1 * 3.28));
				break;
			case 4: printf("\n [결과]  %.2f(미터) --> %.2f(야드)\n\n", leng1, (leng1 * 1.09));
				break;
			}

		else if (num1 == 2)
			switch (num2)
			{
			case 1: printf("\n [결과]  %.2f(인치) --> %.2f(미터)\n\n", leng1, (leng1 * 0.02));
				break;
			case 3: printf("\n [결과]  %.2f(인치) --> %.2f(피트)\n\n", leng1, (leng1 * 0.08));
				break;
			case 4: printf("\n [결과]  %.2f(인치) --> %.2f(야드)\n\n", leng1, (leng1 * 0.02));
				break;
			}

		else if (num1 == 3)
			switch (num2)
			{
			case 1: printf("\n [결과]  %.2f(피트) --> %.2f(미터)\n\n", leng1, (leng1 * 0.3));
				break;
			case 2: printf("\n [결과]  %.2f(피트) --> %.2f(인치)\n\n", leng1, (leng1 * 12));
				break;
			case 4: printf("\n [결과]  %.2f(피트) --> %.2f(야드)\n\n", leng1, (leng1 * 0.33));
				break;
			}

		else if (num1 == 4)
			switch (num2)
			{
			case 1: printf("\n [결과]  %.2f(야드) --> %.2f(미터)\n\n", leng1, (leng1 * 0.91));
				break;
			case 2: printf("\n [결과]  %.2f(야드) --> %.2f(인치)\n\n", leng1, (leng1 * 36));
				break;
			case 3: printf("\n [결과]  %.2f(야드) --> %.2f(피트)\n\n", leng1, (leng1 * 3));
				break;
			}
	}
	printf("\n종료합니다.");

	return 0;
}