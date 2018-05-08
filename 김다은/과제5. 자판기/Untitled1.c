#include <stdio.h>

int main(){
	char input[20];
	for(int i=0;i<20;i++){
		scanf("%c",input[i]);
	}
	for(i=0;i<20;i++){
		if(input[i]!=0)
			printf("%c",input[i]+2);
	}
	for(i=0;i<20;i++){
		if(input[i]!=0)
			printf("%c",(input[i]*7)%80+48);
	}
}¤½
