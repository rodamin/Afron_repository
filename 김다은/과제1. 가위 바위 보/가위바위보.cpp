#include <stdio.h>
int com,user,i;

void scan(){
	scanf("%d %d", &user, &com);
}

void print(int i){
	if(i==0){
		printf("ºñ±è\n");
	}
	else if(i==1){
		printf("ÀÌ±è\n");
	}
	else{
		printf("Áü\n");
	}
}

void fix(){
		if(com==user){
			print(0); 
		}else if(com - user == -2 || com - user == 1){
			print(1);
		}else{
			print(2);
		}
}


int main(){
	printf("ÁÖ¸ÔÀº 0, °¡À§´Â 1, º¸´Â 2 ³¡Àº 3\n");
	while(user != 3){
	scan();
	fix();
}
}
