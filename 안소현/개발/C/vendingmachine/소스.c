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
	printf("�׸� ��ȣ�� �̸� ���� �����Դϴ�.\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d�� %s %d�� %d��\n", i, arr[i].name, arr[i].cst, arr[i].cnt);
	}

}
void checkm()
{
	printf("���Ǳ��� �ܾ��� %d�Դϴ�.\n", moneybox);
}
void add(void)
{
	printf("�׸� ��ȣ�� �Է��ϼ���.\n");
	scanf("%d", &arri);
	printf("�׸� �̸��� ���� ������ �Է��ϼ���.\n");
	scanf("%s %d %d", &arr[arri].name, &arr[arri].cst, &arr[arri].cnt);
}
void del()
{
	printf("������ �׸� ��ȣ�� �Է��ϼ���.\n");
	scanf("%d", &arri);
	strcpy(arr[arri].name, "\0");
	arr[arri].cst = 0;
	arr[arri].cnt = 0;
}
void buy()
{
	int money;
	printf("�׸� ��ȣ�� �Է��ϼ���.\n");
	scanf("%d", &arri);
	printf("�ݾ��� �����ϼ���.\n"); // �ݾ� ���� �� ������ ���� �Ұ�.
	scanf("%d", &money);
	moneybox += money;
	if (money > arr[arri].cst)
	{
		printf("���ŵǾ����ϴ�.\n");
		arr[arri].cnt--; //���� �� ���� ���� ��� ���� �Ұ�.
		moneybox -= arr[arri].cst; // ���� �� ���� ���� �ܾ� ���� �Ұ�.
		printf("�Ž����� %d���� ����������.\n", money - arr[arri].cst);
	}
	else if (money == arr[arri].cst)
	{
		printf("���ŵǾ����ϴ�.\n");
		moneybox -= arr[arri].cst;
	}
	else
	{
		printf("�ݾ��� �����մϴ�.\n");
	}

}

int main()
{
	int ninput1, ninput2;

	while (1)
	{
		printf("�������Դϱ�? �Һ����Դϱ�?\n1.������ 2.�Һ���\n");
		scanf("%d", &ninput1);

		if (ninput1 == 1)
		{
			printf("1.�׸� Ȯ��\n2.�׸� �߰�\n3.�׸� ����\n4.�ŷ��� Ȯ��\n");
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
				printf("�߸��� �Է��Դϴ�.\n");

			}
		}
		else if (ninput1 == 2)
		{
			printf("1.�׸� Ȯ��\n2.�׸� ����\n");
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
				printf("�߸��� �Է��Դϴ�.\n");

			}
		}
		else
		{
			printf("�߸��� �Է��Դϴ�.\n");
		}
	}
}