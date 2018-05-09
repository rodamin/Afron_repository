#include<stdio.h>
#include<time.h>
void main()
{
	int user, com;
	printf("가위바위보 게임\n0은 주먹\n1은 가위\n2는 보\n");
	srand(time);
	com = rand() % 3;
	scanf("%d", &user);
	if (user < 0 || user > 2)
	{
		printf("input incorrect");
	}
	if (user == com)
	{
		printf("user는 %d, com은 %d\n", user, com);
		printf("same");
	}
	else if (user < com)
	{
		if ((user + 2) % 3 == com)
		{
			printf("user는 %d, com은 %d\n", user, com);
			printf("you lose");
		}
		else
		{
			printf("user는 %d, com은 %d\n", user, com);
			printf("you win");
		}
	}
	else
	{
		if ((user + 1) % 3 == com)
		{
			printf("user는 %d, com은 %d\n", user, com);
			printf("you win");
		}
		else
		{
			printf("user는 %d, com은 %d\n", user, com);
			printf("you lose");
		}
	}
}