#include<stdio.h>
#include<string.h>
struct menu
{
	char name[30];
	int cst;
	int cnt;
};
struct menu arr[10];
int arri;
int moneybox;
void checki()
{
	printf("항목 번호와 이름 가격 개수입니다.\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d번 %s %d원 %d개\n", i, arr[i].name, arr[i].cst, arr[i].cnt);
	}

}
void checkm()
{
	printf("자판기의 잔액은 %d입니다.\n", moneybox);
}
void add(void)
{
	printf("항목 번호를 입력하세요.\n");
	scanf("%d", &arri);
	printf("항목 이름과 가격 개수를 입력하세요.\n");
	scanf("%s %d %d", &arr[arri].name, &arr[arri].cst, &arr[arri].cnt);
}
void del()
{
	printf("삭제할 항목 번호를 입력하세요.\n");
	scanf("%d", &arri);
	strcpy(arr[arri].name, "\0");
	arr[arri].cst = 0;
	arr[arri].cnt = 0;
}
void buy()
{
	int money;
	printf("항목 번호를 입력하세요.\n");
	scanf("%d", &arri);
	printf("금액을 투입하세요.\n"); // 금액 여러 번 나눠서 투입 불가.
	scanf("%d", &money);
	moneybox += money;
	if (money > arr[arri].cst)
	{
		printf("구매되었습니다.\n");
		arr[arri].cnt--; //여러 개 구매 후의 재고 수정 불가.
		moneybox -= arr[arri].cst; // 여러 개 구매 후의 잔액 수정 불가.
		printf("거스름돈 %d원을 가져가세요.\n", money - arr[arri].cst);
	}
	else if (money == arr[arri].cst)
	{
		printf("구매되었습니다.\n");
		moneybox -= arr[arri].cst;
	}
	else
	{
		printf("금액이 부족합니다.\n");
	}

}

int main()
{
	int ninput1, ninput2;

	while (1)
	{
		printf("관리자입니까? 소비자입니까?\n1.관리자 2.소비자\n");
		scanf("%d", &ninput1);

		if (ninput1 == 1)
		{
			printf("1.항목 확인\n2.항목 추가\n3.항목 삭제\n4.거래액 확인\n");
			scanf("%d", &ninput2);
			switch (ninput2)
			{
			case 1:
				checki();
				break;
			case 2:
				add();
				break;
			case 3:
				del();
				break;
			case 4:
				checkm();
				break;
			default:
				printf("잘못된 입력입니다.\n");

			}
		}
		else if (ninput1 == 2)
		{
			printf("1.항목 확인\n2.항목 구매\n");
			scanf("%d", &ninput2);
			switch (ninput2)
			{
			case 1:
				checki();
				break;
			case 2:
				buy();
				break;
			default:
				printf("잘못된 입력입니다.\n");

			}
		}
		else
		{
			printf("잘못된 입력입니다.\n");
		}
	}
}