#include<stdio.h>
#include<time.h>
int rsp(int user,int com, int* flag)
{
	if (user < 0 || user > 2)
	{
		printf("input incorrect");
		return 0;
	}
	if (user == com)
	{
		if (flag == 1) {
			printf("you win"); return;
		}
		if (flag == 2) {
			printf("you lose"); return;
		}
		printf("user�� %d, com�� %d\n", user, com);
		printf("same");
		*flag = -1;
	}
	else if (user < com)
	{
		if ((user + 2) % 3 == com)
		{
			printf("user�� %d, com�� %d\n", user, com);
			printf("you lose");
			*flag=2;
		}
		else
		{
			printf("user�� %d, com�� %d\n", user, com);
			printf("you win");
			*flag=1;
		}
	}
	else
	{
		if ((user + 1) % 3 == com)
		{
			printf("user�� %d, com�� %d\n", user, com);
			printf("you win");
			*flag= 1;
		}
		else
		{
			printf("user�� %d, com�� %d\n", user, com);
			printf("you lose");
			*flag= 2;
		}
	}
}
void main()
{
	int user, com,result,flag=-5;
	printf("����� ����\n0�� �ָ�\n1�� ����\n2�� ��\n");
	while (1)
	{
		srand(time);
		com = rand() % 3;
		scanf("%d", &user);
		result = rsp(user, com, &flag);
		if (result == 0)
		{	continue;
		}
		rsp(user, com, flag);
		break;
	}

}