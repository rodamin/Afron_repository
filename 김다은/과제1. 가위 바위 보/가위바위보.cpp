#include <stdio.h>
int com,user,i;

void scan(){
	scanf("%d %d", &user, &com);
}

void print(int i){
	if(i==0){
		printf("���\n");
	}
	else if(i==1){
		printf("�̱�\n");
	}
	else{
		printf("��\n");
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
	printf("�ָ��� 0, ������ 1, ���� 2 ���� 3\n");
	while(user != 3){
	scan();
	fix();
}
}
