// 스택.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//1 2 3 4 5 6 까지 푸시, 팝 3번, 

#include "stdafx.h"
#define MAX_SIZE 80

int stack[MAX_SIZE];
int top = -1;

int push(int num)
{
	top++;
	stack[top] = num;
	return top;
}

int pop()
{
	printf("%d\n", stack[top]);
	top--;
	return top;
}
int main()
{
	int i = 0;
	int num = 0;
	int pivot = 0;
	printf("1. push 2. pop\n");
	scanf_s("%d", &pivot);
	switch (pivot)
	{
	case 1:
		scanf_s("%d", &num);
		printf("%d\n", push(num));
		
		break;
	case 2:
		pop();
		break;
	}
	return 0;
}

