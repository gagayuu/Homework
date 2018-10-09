#define  _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
void menu(){
	printf("**************************\n");
	printf("******开始游戏输入1*******\n");
	printf("******结束游戏输入0*******\n");
	printf("**************************\n");
}

void game(){
	
	int r = rand() % 100 + 1;
	while(1){
		printf("请输入一个1~100之间的数字：\n");
		int n = 0;
		scanf("%d", &n);
		if (n < r){
			printf("猜小了\n");
			
		}
		else if (n>r){
			printf("猜大了\n");
			
		}
		else {
			printf("猜对了！！！\n");
			
		}

	} 
}
int main(){
	menu();
	srand((unsigned)time(NULL));
	int i=0 ;
	printf("请输入1或0:\n");
	scanf("%d", &i);

   switch (i){
		case 1:
			game(); 
			break;
		case 0:
			printf("退出游戏\n");
			break;
		}
	
	return 0;
}
