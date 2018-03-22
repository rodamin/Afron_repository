// 자판기.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#define MAX_SIZE 80

int stack[MAX_SIZE];
int top = -1;

struct japangi
{
	char m[10];
	int c;
	int g;
};

int push(int num)
{
	top++;
	stack[top] = num;
}

int pop(int mnm)
{
	printf("%d\n", stack[top]);
	top--;
}

int main()
{
	struct japangi object[30];
	int s, d, f, gem, count;
	char item[20], add[20], j[20];
	printf("1. 관리자 2. 사용자");
	scanf_s("%d", &s);
	printf("===============================");

	if (s == 1)
	{
		printf("1.재고 확인 2.제품 추가 3.제품 제거");
		scanf_s("%d", &d);
		switch (d)
		{
		case 1:
			printf("원하는 제품의 명을 입력하세요.");
			scanf_s("%s", &j);
			for (int i = 0; i < 10; i++)
			{
				if (object[i].m == j)
				{
					printf("현재 재고:%d\n", object[i].g);
					break;
				}
			}
		case 2:
			printf("추가할 제품의 이름과 가격을 입력하세요.");
			scanf_s("%s %d", &add, &count);
			push(object[top].g);

		case 3:
			char mus[20];
			int gob;
			printf("제거할 제품의 이름과 가격을 입력하세요.");
			scanf_s("%s %d", &mus, &gob);
			pop(object[top].g);

		default: printf("잘못된 입력값입니다.");
			break;
		}

	}
	else if (s==2)
	{
		printf("1.제품 확인 2.구매");
		scanf_s("%d", &f);
		switch (f)
		{
		case 1:
			for (int i = 0; i < 10; i++)
			{
				printf("object[top]");
				top++;
			}

		case 2:
			printf("금액을 입력하세요.");
			scanf_s("%d", &gem);
			printf("음료수를 선택하세요.");
			scanf_s("%s", &item);
			for (int i = 0; i < 10; i++)
			{
				if (object[i].m == j)
				{
					printf("거스름 돈 입니다.:%d\n", count - gem);
					break;
				}
			}
		default: printf("잘못된 입력값 입니다.");
			break;
		}
	}
	else
		printf("잘못된 입력값입니다.");
    return 0;
}

