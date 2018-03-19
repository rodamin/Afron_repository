#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

	int pc = 0;
	int user = 0;
	int i = 0;

	srand(time(NULL));
	pc = rand()%100;

	printf("무슨 숫자일까요? (1~100)");	
	scanf("%d", &user);
	
	if(user > pc){
		printf("down");
	}
	else{
		printf("up");
	}
	
	for(i = 0; i < 6; i++){
		printf("무슨 숫자일까요? (1~100)");	
		scanf("%d", &user);
	
		if(user > pc){
		
		printf("down");
		
		} else if(user == pc){
			
			printf("이겼습니다!");
			break;
		}
		else{
		
		printf("up");
		
		}	
	}
	
	if(pc != user){
	printf("졌습니다!"); 
}
}
