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

		printf("1���� ������, 2���� �����.\n");
		scanf("%d", &admin);

		if (admin == 1) {

			int want = 0;

			printf("1���� ��ǰ ���, 2���� ��ǰ ����.\n");
			scanf("%d", &a);

			switch (a) {
			case 1:

				top++;
				printf("��ǰ�� �̸��� ����ϼ���.\n");
				scanf("%s", &key[top].name);

				printf("��ǰ�� ������ ����ϼ���.\n");
				scanf("%d", &key[top].cost);

				printf("��ǰ�� ������ ����ϼ���.\n");
				scanf("%d", &key[top].stub);

				printf("��� Ȯ���ϰ� �ʹٸ� 1��, �׸��ϰ� �ʹٸ� 2���� �����ּ���.\n");
				scanf("%d", &want);

				if (want == 1) {

					pop();
				}
				else if (want == 2) {

					break;
				}
			case 2:

				printf("������ ��ǰ�� �̸��� �Է� �ϼ���.\n");
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

			printf("���� �־��ּ���\n");
			scanf("%d", &money);

			printf("���ϴ� ��ǰ�� �Է����ּ���\n");
			scanf("%s", &park);

			for (i = 0; i < 20; i++) {

				if (!strcmp(key[i].name, park)) {

					printf("���ϴ� ��ǰ�� ������ �Է��ϼ���\n");
					scanf("%d", &num);

					if (key[i].cost <= money) {

						if (key[i].stub >= num) {

							key[i].stub = key[i].stub - num;
							printf("%s�������Ͽ� �ּż� �����մϴ�.\n", park);
							printf("�Ž������� %d���Դϴ�.\n", money - key[i].cost);
							break;
						}
						else if (key[i].stub < num) {

							printf("��� �����ϴ�.\n");
							break;
						}
						break;
					}
					else if (key[i].cost > money)
					{
						printf("%d���� ���ڶ��ϴ�.", key[i].cost - money);
						break;
					}
				}
			}
		}

	}
	system("pause");
}
