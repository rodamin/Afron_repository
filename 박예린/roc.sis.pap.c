#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()

{
	int roc = 0, sis = 1, pap = 2;
	int user = 0;
	int pc = 0;
	
	//pc���� ����  
	srand(time(NULL));
	pc= rand()%3; 
	
	//�ȳ��� 
    printf("���� = 0, ���� = 1, �� = 2 \n");
    printf ("0���� 2 ������ ���� �Է��ϼ���\n");
    
    //�Է��� �� 
	scanf("%d",&user);
    printf("%d",pc);
   
    //user�� �߸��� ���� �־��� �� 
    if(0>user||user>2) 
    {
		printf("�߸��� �Է��Դϴ�.");
	}
	
	//����, �� 
	if(user==0||user==2)
		{
			if(pc==user+1||pc==user-1) 
			printf("�¸�");
				
			else if (pc==user+2||pc==user-2)
			printf("�й�");
		
			if(user==pc)
			printf("���º�");
		}
	
	//���� 
	if(user==1)
	 	{
	 		if(pc>user)
			printf("�¸�");
			 
			else if(pc<user) 
				printf("�й�"); 
		 
			if(pc==user)
				printf("���º�");
		 }
	
 } 
