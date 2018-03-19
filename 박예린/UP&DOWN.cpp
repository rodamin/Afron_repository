#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
	int pc = 0;
	int user = 0;
	int chan = 0;
	
	srand(time(NULL));
	
	pc = rand() %100+1;
	

	for(chan = 0; chan < 7; chan++)
	{
		printf("무슨 숫자일까요?(1부터 100까지)\n");
	
		scanf("%d",&user);
    
		if(user<pc)
			printf("UP\n");
	
			
		else if(user>pc)
			printf("DOWN\n");
		
			
		if(user == pc)
		{
			printf("정답입니다!\n");
			break;
		}
		
		if(chan == 7)
		{
			printf("모든 기회를 다 사용했습니다!\n");
			break;	
		}
 
	}  
	

	return 0;
}
