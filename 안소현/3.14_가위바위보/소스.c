#include<stdio.h>
#include<time.h>
void main()
{
	int user, com;
	printf("���������� ����\n0�� �ָ�\n1�� ����\n2�� ��\n");
	srand(time);
	com = rand() % 3;
	scanf("%d", &user);
	if (user < 0 || user > 2)
	{
		printf("input incorrect");
	}
	if (user == com)
	{
		printf("user�� %d, com�� %d\n", user, com);
		printf("same");
	}
	else if (user < com)
	{
		if ((user + 2) % 3 == com)
		{
			printf("user�� %d, com�� %d\n", user, com);
			printf("you lose");
		}
		else
		{
			printf("user�� %d, com�� %d\n", user, com);
			printf("you win");
		}
	}
	else
	{
		if ((user + 1) % 3 == com)
		{
			printf("user�� %d, com�� %d\n", user, com);
			printf("you win");
		}
		else
		{
			printf("user�� %d, com�� %d\n", user, com);
			printf("you lose");
		}
	}
}