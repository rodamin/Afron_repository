// 자판기.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <string.h>
#pragma warning(disable: 4996)
#define MAX_SIZE 80

int stack[MAX_SIZE];
int top = -1;

struct japangi
{
	char name[50];
	int cost;
	int stub;
};
struct japangi object[30] = { 0 };

int push(char* name, int cost, int stub)
{
	top++;
	strcpy(object[top].name, name);
	object[top].cost = cost;
	object[top].stub = stub;
	return 0;
}

int pop(char* name, int cost, int stub)
{
	memset(object[top].name, '\0', strlen(object[top].name));
	object[top].cost = 0;
	object[top].stub = 0;
	return 0;
}

int main()
{
	int s, d, f, gem, count, stub;
	char item[20], add[20], j[20];
	printf("1. 관리자 2. 사용자\n");
	printf("===============================\n");
	scanf("%d", &s);

	if (s == 1)
	{
		printf("1.제품 추가 2.제품 제거 3.제품 확인 4.종료 5.사용자 전환\n");
		scanf("%d", &d);
		do
		{
			if (d == 4)
			{
				printf("끝났습니다.\n");
				break;
			}

			if (d == 5)
			{
				printf("1. 사용자\n");
				printf("===============================\n");
				scanf("%d", &s);

				if (s == 1)
				{
					printf("1.제품 확인 2.구매 3.사용자 전환 4.종료\n");
					scanf("%d", &f);
					switch (f)
					{
						do
						{
					case 1:
						for (int i = 0; i < 10; i++)
						{
							printf("%s %d %d\n", object[i].name, object[i].cost, object[i].stub);
						}
						break;
					case 2:
						printf("금액을 입력하세요.\n");
						scanf("%d", &gem);
						printf("음료수를 선택하세요.\n");
						scanf("%s", &item);
						for (int i = 0; i < 10; i++)
						{
							if (object[i].name == j)
							{
								printf("거스름 돈 입니다.:%d\n", gem - object[top].cost);
							}
						}
						break;
					case 3:
						printf("1.제품 추가 2.제품 제거 3.제품 확인 4.종료 5.사용자 전환\n");
						scanf("%d", &d);
						do
						{
							if (d == 4)
							{
								printf("끝났습니다.\n");
								break;
							}

							if (d == 5)
							{
								printf("1. 사용자\n");
								printf("===============================\n");
								scanf("%d", &s);

								if (s == 1)
								{
									printf("1.제품 확인 2.구매\n");
									scanf("%d", &f);
									switch (f)
									{
									case 1:
										for (int i = 0; i < 10; i++)
										{
											printf("%s %d %d\n", object[top].name, object[top].cost, object[top].stub);
											top++;
										}
										break;

									case 2:
										printf("금액을 입력하세요.\n");
										scanf("%d", &gem);
										printf("음료수를 선택하세요.\n");
										scanf("%s", &item);
										for (int i = 0; i < 10; i++)
										{
											if (object[i].name == j)
											{
												printf("거스름 돈 입니다.:%d\n", object[top].stub - gem);
												break;
											}
										}
									default: printf("잘못된 입력값 입니다.\n\a");
										break;
									}
									break;
								}
								else
								{
									printf("잘못된 입력값입니다.\n\a");
								}
							}
							switch (d)
							{
							case 1:
							{
								printf("추가할 제품의 이름과 가격, 재고를 입력하세요.\n");
								scanf("%s %d %d", &object[top].name, &object[top].cost, &object[top].stub);
								push(object[top].name, object[top].cost, object[top].stub);
								break;
							}

							case 2:
							{
								printf("제거할 제품의 이름과 가격, 재고를 입력하세요.\n");
								scanf("%s %d %d", &object[top].name, &object[top].cost, &object[top].stub);
								pop(object[top].name, object[top].cost, object[top].stub);
								break;
							}

							case 3:
							{
								for (int i = 0; i < 10; i++)
								{
									printf("%s %d %d\n", object[i].name, object[i].cost, object[i].stub);
								}
								break;
							}
							default: printf("잘못된 입력값입니다.\n\a");
								break;
							}

							printf("1.제품 추가 2.제품 제거 3.제품 확인 4.종료 5.사용자 전환\n");
							scanf("%d", &d);

						} while (true);
					case 4:
						printf("이용해주셔서 감사합니다.");
						break;

						} while (true);

					default:
						break;
					}
				}
				else
				{
					printf("잘못된 입력값입니다.\n\a");
				}
			}
			switch (d)
			{
			case 1:
			{
				printf("추가할 제품의 이름과 가격, 재고를 입력하세요.\n");
				scanf("%s %d %d", &object[top].name, &object[top].cost, &object[top].stub);
				push(object[top].name, object[top].cost, object[top].stub);
				break;
			}

			case 2:
			{
				printf("제거할 제품의 이름과 가격, 재고를 입력하세요.\n");
				scanf("%s %d %d", &object[top].name, &object[top].cost, &object[top].stub);
				pop(object[top].name, object[top].cost, object[top].stub);
				break;
			}

			case 3:
			{
				for (int i = 0; i < 10; i++)
				{
					printf("%s %d %d\n", object[i].name, object[i].cost, object[i].stub);
				}
				break;
			}
			default: printf("잘못된 입력값입니다.\n\a");
				break;
			}

			printf("1.제품 추가 2.제품 제거 3.제품 확인 4.종료 5.사용자 전환\n");
			scanf("%d", &d);

		} while (true);

	}
	else if (s == 2)
	{
		printf("1.제품 확인 2.구매 3.사용자 전환 4.종료\n");
		scanf("%d", &f);
		switch (f)
		{
			do
			{
		case 1:
			for (int i = 0; i < 10; i++)
			{
				printf("%s %d %d\n", object[i].name, object[i].cost, object[i].stub);
			}
			break;

		case 2:
			printf("금액을 입력하세요.\n");
			scanf("%d", &gem);
			printf("음료수를 선택하세요.\n");
			scanf("%s", &object[top].name);
			printf("몇 개 뽑으시겠습니까?\n");
			scanf("%d", &object[top].stub);
			for (int i = 0; i < 10; i++)
			{
				if (object[i].name == j)
				{
					printf("거스름 돈 입니다.:%d\n", gem*stub - object[top].cost);
				}
			}
			break;

		case 3:
			printf("1.제품 추가 2.제품 제거 3.제품 확인 4.종료 5.사용자 전환\n");
			scanf("%d", &d);
			do
			{
				if (d == 4)
				{
					printf("끝났습니다.\n");
					break;
				}

				if (d == 5)
				{
					printf("1. 사용자\n");
					printf("===============================\n");
					scanf("%d", &s);

					if (s == 1)
					{
						printf("1.제품 확인 2.구매\n");
						scanf("%d", &f);
						switch (f)
						{
						case 1:
							for (int i = 0; i < 10; i++)
							{
								printf("%s %d %d\n", object[top].name, object[top].cost, object[top].stub);
								top++;
							}
							break;

						case 2:
							printf("금액을 입력하세요.\n");
							scanf("%d", &gem);
							printf("음료수를 선택하세요.\n");
							scanf("%s", &item);
							for (int i = 0; i < 10; i++)
							{
								if (object[i].name == j)
								{
									printf("거스름 돈 입니다.:%d\n", object[top].stub - gem);
									break;
								}
							}
						default: printf("잘못된 입력값 입니다.\n\a");
							break;
						}
						break;
					}
					else
					{
						printf("잘못된 입력값입니다.\n\a");
					}
				}
				switch (d)
				{
				case 1:
				{
					printf("추가할 제품의 이름과 가격, 재고를 입력하세요.\n");
					scanf("%s %d %d", &object[top].name, &object[top].cost, &object[top].stub);
					push(object[top].name, object[top].cost, object[top].stub);
					break;
				}

				case 2:
				{
					printf("제거할 제품의 이름과 가격, 재고를 입력하세요.\n");
					scanf("%s %d %d", &object[top].name, &object[top].cost, &object[top].stub);
					pop(object[top].name, object[top].cost, object[top].stub);
					break;
				}

				case 3:
				{
					for (int i = 0; i < 10; i++)
					{
						printf("%s %d %d\n", object[i].name, object[i].cost, object[i].stub);
					}
					break;
				}
				default: printf("잘못된 입력값입니다.\n\a");
					break;
				}

				printf("1.제품 추가 2.제품 제거 3.제품 확인 4.종료 5.사용자 전환\n");
				scanf("%d", &d);

			} while (true);

		case 4:
			printf("이용해주셔서 감사합니다.");
			break;

		default: printf("잘못된 입력값 입니다.\n\a");
			break;
			} while (true);

		}
	}
	else
		printf("잘못된 입력값입니다.\n\a");
	return 0;
}