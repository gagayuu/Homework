#define  _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
void menu(){
	printf("**************************\n");
	printf("******��ʼ��Ϸ����1*******\n");
	printf("******������Ϸ����0*******\n");
	printf("**************************\n");
}

void game(){
	
	int r = rand() % 100 + 1;
	while(1){
		printf("������һ��1~100֮������֣�\n");
		int n = 0;
		scanf("%d", &n);
		if (n < r){
			printf("��С��\n");
			
		}
		else if (n>r){
			printf("�´���\n");
			
		}
		else {
			printf("�¶��ˣ�����\n");
			
		}

	} 
}
int main(){
	menu();
	srand((unsigned)time(NULL));
	int i=0 ;
	printf("������1��0:\n");
	scanf("%d", &i);

   switch (i){
		case 1:
			game(); 
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		}
	
	return 0;
}
