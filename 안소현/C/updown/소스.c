#include<stdio.h>
#include<time.h>
main()
{
	int com,user,flag=0;
	srand(time);
	com=rand()%101;
	for (int i = 0; i <= 7; i++)
	{
		printf("수를 입력하시오.\n");
		scanf("%d", &user);
		if (user > com)	printf("down");
		else if (user < com) printf("up");
		else
		{
			flag +=1;
			printf("you win"); break;
		}
	}
	if (flag == 0)
	{
		printf("you lose");
	}
}