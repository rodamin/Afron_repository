// 우애애앵.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <stdlib.h>
#include <time.h>


int main()
{
	int updown = 0, system = 0, i = 0;
	srand(time(NULL));
	system = (rand() % 100);
	printf("업다운 게임 시작. 기회 7번\n");

	do
	{
		scanf_s("%d", &updown);
		if (updown == system)
		{
			printf("win!");
			break;
		}
		else if (updown < system)
		{
			printf("up\n");
		}
		else if (updown > system)
		{
			printf("down\n");
		}
		if (i==6)
		{
			printf("기회초과, lose");
			break;
		}
		i++;
	} while (i < 7);
    return 0;
}

