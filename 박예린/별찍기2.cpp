#include <stdio.h>

main()
{
	int i = 0;
	int o = 0;
	int p = 5; 
	
	o = p;
	
	for(i = 0; i < 5; i++)
	{
		for(o = p; p > 0; p--)
		{
		printf("*");
		}
		
		printf("\n");
	}
}
