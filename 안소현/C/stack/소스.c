#include<stdio.h>
int top=-1;
int max = 79;
int min = 0;
int push(int stack[])
{
	top++;
	if (top >= max || top < min) { return -1; }
	scanf("%d", &stack[top]);
	printf("push %d\n", stack[top]);
	return 0;
}
int pop(int stack[])
{
	if (top >= max || top < min) { return -1; }
	printf("pop %d\n", stack[top]);
	top--;
	return 0;
}
int main()
{
	int stack[80];
	int ninput;
	int flowtest=0;
	printf("input 1(push) or 0(pop)\n");
	printf("input 10(stop)\n");
	while (1)
	{
		scanf("%d", &ninput);
		if (ninput == 1)
		{
			flowtest=push(stack);
		}
		else if (ninput == 0)
		{
			pop(stack);
		}
		else
		{
			flowtest=printf("wrong input\n");
		}
		if (flowtest == -1)
			printf("overflow or underflow happens");
	}
}