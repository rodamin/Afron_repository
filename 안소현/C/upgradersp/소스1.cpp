#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int com, user,flag=0;
void rsp()
{
	srand((unsigned int)time);
	com = rand() % 3;
	scanf("%d", &user);

	if (user < 0 || user > 2)
	{
		printf("input incorrect");
		rsp();
	}
	if (user == com)
	{
		printf("user�� %d, com�� %d\n", user, com);
		printf("same\n");
		if (flag == 1) {
			printf("you win!\n"); return;
		}
		else if (flag == 2) {
			printf("you lose!\n"); return;
		}
		else
		{
			flag = -1;
			rsp();
		}
		
	}
	else if (user < com)
	{
		if ((user + 2) % 3 == com)
		{
			printf("user�� %d, com�� %d\n", user, com);
			printf("you lose\n");
			flag = 2;
			rsp();
		}
		else
		{
			printf("user�� %d, com�� %d\n", user, com);
			printf("you win\n");
			flag = 1;
			rsp();
		}
	}
	else
	{
		if ((user + 1) % 3 == com)
		{
			printf("user�� %d, com�� %d\n", user, com);
			printf("you win\n");
			flag = 1;
			rsp();
		}
		else
		{
			printf("user�� %d, com�� %d\n", user, com);
			printf("you lose\n");
			flag = 2;
			rsp();
		}
	}
}
int main()
{
	printf("����� ����\n0�� �ָ�\n1�� ����\n2�� ��\n");
	rsp();

}