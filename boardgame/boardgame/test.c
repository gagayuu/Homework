#include "game.h"

void menu(){
	printf("********************************\n");
	printf("*********三子棋小游戏***********\n");
	printf("*********1. 开始游戏 ***********\n");
	printf("*********2. 退出游戏 ***********\n");
	printf("********************************\n");
}

void game(){
	char board[ROW][COL] = { 0 };
	InitBoard(board,ROW,COL);
	DisplayBoard(board, ROW, COL);
	while(1){
		printf("电脑走->\n");
		ComputerMove(board, ROW, COL); //电脑每走一步判断一次是否要继续游戏
		if (IsWin(board, ROW, COL) != ' '){
			break;
		}
		DisplayBoard(board, ROW, COL);
		
		printf("玩家走->\n");
		PlayerMove(board, ROW, COL);//玩家每走一步判断一次是否要继续游戏
		if (IsWin(board, ROW, COL) != ' '){
			break;
		}
		DisplayBoard(board, ROW, COL);


	}
	if (IsWin(board, ROW, COL) == 'X')
		printf("电脑赢\n");
	else if (IsWin(board, ROW, COL) == '*')
		printf("玩家赢\n");
	else
		printf("平局\n");
}





int main(){
	int input = 0;
	srand((unsigned int)time(NULL));
	do{
		menu();
		printf("请选择->\n");
		scanf("%d", &input);
		scanf("%d", &input);
		char ch;
		while (((ch = getchar()) != '\n') && (ch != EOF)){
			;
		}
		switch (input){
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("请输入1或0\n");
		}
	} while (input);
		return 0;

}
