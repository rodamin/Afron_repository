// 별찍기.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int i, j;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4 - i; j++)
		{
			printf(" ");
		}

		for (j = 0; j < i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
    return 0;
}

