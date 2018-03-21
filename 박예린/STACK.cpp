#include <stdio.h>
#define MAX_SIZE 80
int stack[MAX_SIZE];

int top = -1;

void push(int p)
{
	if(top <= MAX_SIZE)
		return;
		
	stack[++top] = p;
}

void pop()
{
	if(top < 0)
		return;
	
	printf("%d",stack[top]);
	--top;
}

int main()
{
	int b;
	scanf("%d", &b);
	push(b);
	pop();
}
