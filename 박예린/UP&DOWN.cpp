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
		printf("���� �����ϱ��?(1���� 100����)\n");
	
		scanf("%d",&user);
    
		if(user<pc)
			printf("UP\n");
	
			
		else if(user>pc)
			printf("DOWN\n");
		
			
		if(user == pc)
		{
			printf("�����Դϴ�!\n");
			break;
		}
		
		if(chan == 7)
		{
			printf("��� ��ȸ�� �� ����߽��ϴ�!\n");
			break;	
		}
 
	}  
	

	return 0;
}
