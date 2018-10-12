#include "game.h"

//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col){
	int i = 0;
	int j = 0;
	for (i = 0; i < row;i++){
		for (j = 0; j < col; j++){
			board[i][j] = ' ';
		}
	}
}

//��ӡ����
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


//������
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


//�����
void PlayerMove(char board[ROW][COL], int row, int col){
	int x = 0;
	int y = 0;
	while (1){
		printf("����������x,y\n");
		scanf("%d,%d", &x, &y);
		if ((x >= 1) && (x <= row) && (y >= 1) && (y <= col)){
			if (board[x-1][y-1] == ' '){
				board[x-1][y-1] = '*';
				break;
			}
		}
		else
			printf("����������������������\n");
	}
}

//�ж������Ƿ�����
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


//�ж���Ӯ
char IsWin(char board[ROW][COL], int row, int col){
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++){
		if ((board[i][0] == board[i][1] )&&( board[i][1] == board[i][2])) //����һ��
			return board[i][0];
	}
	for (j = 0; j < col; j++){
		if ((board[0][j] == board[1][j] )&& (board[1][j] == board[2][j])) //����һ��
			return board[0][j];
	}
	if ((board[0][0] == board[1][1]) && (board[1][1] == board[2][2])){ //�Խ���һ��
		return board[1][1];
	}
	else if ((board[0][2] == board[1][1]) && (board[1][1] == board[2][0])){ //�Խ���һ��
		return board[1][1];
	}
	else if (IsFull(board,ROW,COL)==1){  //ƽ�� 
		return 'q';
	}
	else//����δ����Ϸ����
		return ' ';

}