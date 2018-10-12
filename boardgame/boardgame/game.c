#include "game.h"

//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col){
	int i = 0;
	int j = 0;
	for (i = 0; i < row;i++){
		for (j = 0; j < col; j++){
			board[i][j] = ' ';
		}
	}
}

//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col){
	int i = 0;
	for (i = 0; i < row; i++){
		printf(" %c | %c | %c ", board[i][0], board[i][1], board[i][2]);
		printf("\n");
		if (i < row - 1){
			printf("___|___|___");
			printf("\n");
		}
		if (i==2){
			printf("   |   |   ");
		}
	}
	printf("\n");
}


//电脑走
void ComputerMove(char board[ROW][COL], int row, int col){
	int x = 0;
	int y = 0;
	while (1){
		x = rand() % ROW;
		y = rand() % COL;
		if (board[x][y] == ' '){
			board[x][y] = 'X';
			break;
		}
	}
}


//玩家走
void PlayerMove(char board[ROW][COL], int row, int col){
	int x = 0;
	int y = 0;
	while (1){
		printf("请输入坐标x,y\n");
		scanf("%d,%d", &x, &y);
		if ((x >= 1) && (x <= row) && (y >= 1) && (y <= col)){
			if (board[x-1][y-1] == ' '){
				board[x-1][y-1] = '*';
				break;
			}
		}
		else
			printf("坐标输入有误，请重新输入\n");
	}
}

//判断棋盘是否已满
int IsFull(char board[ROW][COL], int row, int col){
	int i = 0;
	int j = 0;
	int r = 0;
	for (i = 0; i < row; i++){
		for (j = 0; j < col; j++){
			if (board[i][j] ==' '){
				return 0;
			}
		}
	}
	return 1;
}


//判断输赢
char IsWin(char board[ROW][COL], int row, int col){
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++){
		if ((board[i][0] == board[i][1] )&&( board[i][1] == board[i][2])) //横排一样
			return board[i][0];
	}
	for (j = 0; j < col; j++){
		if ((board[0][j] == board[1][j] )&& (board[1][j] == board[2][j])) //竖排一样
			return board[0][j];
	}
	if ((board[0][0] == board[1][1]) && (board[1][1] == board[2][2])){ //对角线一样
		return board[1][1];
	}
	else if ((board[0][2] == board[1][1]) && (board[1][1] == board[2][0])){ //对角线一样
		return board[1][1];
	}
	else if (IsFull(board,ROW,COL)==1){  //平局 
		return 'q';
	}
	else//棋盘未满游戏继续
		return ' ';

}