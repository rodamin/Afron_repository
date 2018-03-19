#include <stdio.h>
main()
{
	printf("38*75-63=2787\n");
	int a = 38, b = 75, c = 63;
	printf("%d*%d-%d=%d\n", a, b, c, a*b-c);
	a=a*b-c;
	printf("¸Þ¸ð¸®[%d]=%d\n", &a,a);
}
