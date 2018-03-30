#include <stdio.h>
#include <string.h>
#include <windows.h>

struct zapanki {

	char name[20];
	int cost;
	int stub;

};

struct zapanki key[10] = { 0 };
int top = -1;

void pop() {

	for (int i = 0; i < 10; i++) {

		printf("%s\n", key[i].name);
		printf("%d\n", key[i].cost);
		printf("%d\n", key[i].stub);
	}
}

int main() {

	int admin, a, con;
	char name[20];

	while (1) {

		printf("1번은 관리자, 2번은 사용자.\n");
		scanf("%d", &admin);

		if (admin == 1) {

			int want = 0;

			printf("1번은 제품 등록, 2번은 제품 삭제.\n");
			scanf("%d", &a);

			switch (a) {
			case 1:

				top++;
				printf("제품의 이름을 등록하세요.\n");
				scanf("%s", &key[top].name);

				printf("제품의 가격을 등록하세요.\n");
				scanf("%d", &key[top].cost);

				printf("제품의 개수를 등록하세요.\n");
				scanf("%d", &key[top].stub);

				printf("재고를 확인하고 싶다면 1번, 그만하고 싶다면 2번을 눌러주세요.\n");
				scanf("%d", &want);

				if (want == 1) {

					pop();
				}
				else if (want == 2) {

					break;
				}
			case 2:

				printf("삭제할 제품의 이름을 입력 하세요.\n");
				scanf("%s", &name);

				for (int i = 0; i < 10; i++)
				{
					if (!strcmp(key[i].name, name))
					{
						memset(key[i].name, '\0', strlen(key[i].name));
						key[i].cost = 0;
						key[i].stub = 0;
						break;
					}
				}
				break;
			}
		}
		if (admin == 2) {
			int money, num, i;
			char park[20];

			printf("돈을 넣어주세요\n");
			scanf("%d", &money);

			printf("원하는 제품을 입력해주세요\n");
			scanf("%s", &park);

			for (i = 0; i < 20; i++) {

				if (!strcmp(key[i].name, park)) {

					printf("원하는 제품의 수량을 입력하세요\n");
					scanf("%d", &num);

					if (key[i].cost <= money) {

						if (key[i].stub >= num) {

							key[i].stub = key[i].stub - num;
							printf("%s를구매하여 주셔서 감사합니다.\n", park);
							printf("거스름돈은 %d원입니다.\n", money - key[i].cost);
							break;
						}
						else if (key[i].stub < num) {

							printf("재고가 없습니다.\n");
							break;
						}
						break;
					}
					else if (key[i].cost > money)
					{
						printf("%d원이 모자랍니다.", key[i].cost - money);
						break;
					}
				}
			}
		}

	}
	system("pause");
}
