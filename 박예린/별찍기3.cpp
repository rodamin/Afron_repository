#include <stdio.h>

main()
{
	int i = 0;
	int o = 0;

	
	for(i = 0; i < 5; i++)
	{
		for(o = 0; o < 4 - i; o++)
		printf(" ");
		
		for(o = 0; o <= i; o++)
		printf("*");
				
		printf("\n");
	}
}
