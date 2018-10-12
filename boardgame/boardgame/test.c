#include "game.h"

void menu(){
	printf("********************************\n");
	printf("*********������С��Ϸ***********\n");
	printf("*********1. ��ʼ��Ϸ ***********\n");
	printf("*********2. �˳���Ϸ ***********\n");
	printf("********************************\n");
}

void game(){
	char board[ROW][COL] = { 0 };
	InitBoard(board,ROW,COL);
	DisplayBoard(board, ROW, COL);
	while(1){
		printf("������->\n");
		ComputerMove(board, ROW, COL); //����ÿ��һ���ж�һ���Ƿ�Ҫ������Ϸ
		if (IsWin(board, ROW, COL) != ' '){
			break;
		}
		DisplayBoard(board, ROW, COL);
		
		printf("�����->\n");
		PlayerMove(board, ROW, COL);//���ÿ��һ���ж�һ���Ƿ�Ҫ������Ϸ
		if (IsWin(board, ROW, COL) != ' '){
			break;
		}
		DisplayBoard(board, ROW, COL);


	}
	if (IsWin(board, ROW, COL) == 'X')
		printf("����Ӯ\n");
	else if (IsWin(board, ROW, COL) == '*')
		printf("���Ӯ\n");
	else
		printf("ƽ��\n");
}





int main(){
	int input = 0;
	srand((unsigned int)time(NULL));
	do{
		menu();
		printf("��ѡ��->\n");
		scanf("%d", &input);
		switch (input){
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("������1��0\n");
		}
	} while (input);
		return 0;

}