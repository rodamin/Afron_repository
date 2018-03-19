#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()

{
	int roc = 0, sis = 1, pap = 2;
	int user = 0;
	int pc = 0;
	
	//pc값은 랜덤  
	srand(time(NULL));
	pc= rand()%3; 
	
	//안내문 
    printf("바위 = 0, 가위 = 1, 보 = 2 \n");
    printf ("0에서 2 사이의 수를 입력하세요\n");
    
    //입력한 값 
	scanf("%d",&user);
    printf("%d",pc);
   
    //user가 잘못된 값을 넣었을 때 
    if(0>user||user>2) 
    {
		printf("잘못된 입력입니다.");
	}
	
	//바위, 보 
	if(user==0||user==2)
		{
			if(pc==user+1||pc==user-1) 
			printf("승리");
				
			else if (pc==user+2||pc==user-2)
			printf("패배");
		
			if(user==pc)
			printf("무승부");
		}
	
	//가위 
	if(user==1)
	 	{
	 		if(pc>user)
			printf("승리");
			 
			else if(pc<user) 
				printf("패배"); 
		 
			if(pc==user)
				printf("무승부");
		 }
	
 } 
