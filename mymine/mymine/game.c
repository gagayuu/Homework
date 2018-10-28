#include"game.h"

void InitBoard(char arr[ROWS][COLS], int rows, int cols, char set){
	memset(&arr[0][0], set, rows*cols*sizeof(arr[0][0]));
}

void DisplayBoard(char arr[ROWS][COLS], int row, int col){
	int i = 0;
	int j = 0;
	//打印列号
	for (i = 0; i <= row; i++){
		printf("%d ", i);
	}
	printf("\n");

	//打印棋盘
	for (i = 1; i <= row; i++){
		printf("%d ", i);// 行号
		for (j = 1; j <= col; j++){
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

//设雷
void SetMine(char arr[ROWS][COLS], int row, int col){
	int x = 0;
	int y = 0;
	int count = EASY_COUNT;
	while (count){
		x = rand() % 9 + 1;
		y = rand() % 9 + 1;
		if (arr[x][y] == '0'){
			arr[x][y] = '1';
			count--;
		}


	}
}


//排雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col){
	int x = 0;
	int y = 0;
	int  count = 0;
	while (1){
		printf("请输入要排查的坐标->\n");
		scanf("%d,%d", &x, &y);
		if (x >= 1 && x <= 9 && y >= 1 && y <= 9){ //坐标要合法
			if (mine[x][y] == '1'){                //若第一步排到雷，将其坐标变为‘0’
				SafeFirst(mine,show,ROW,COL);  //再找到一个‘0’的地方将其设为雷
				DisplayBoard(show, ROW, COL);
				break;
			}
			else{				                  //排查周围雷的个数
				count = FindMineCount(mine, x, y);
				show[x][y] = count + '0';
				ExtendBoard(mine, show, ROW, COL, x, y);
				DisplayBoard(show, ROW, COL);
			
			}

		}
		else
			printf("输入坐标不合法，请重新输入\n");
			
	}
	if (IsWin(show, ROW, COL) == EASY_COUNT){
		printf("恭喜你！排雷成功!\n");
		DisplayBoard(show, ROW, COL);
	}
}

//排查周围雷的个数
//排查输入位置的周围八个有没有雷，前提将雷设为‘1’，数其之和为多少，注意字符和数字的转换
int FindMineCount(char mine[ROWS][COLS], int x, int y){
	return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';
}

//判断输赢，在玩家没有被炸死的情况下如果排查完所有的坐标还剩下十个雷即为雷的个数，排雷成功
int IsWin(char show[ROWS][COLS], int row, int col){
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 0; i < row; i++){
		for (j = 0; j < col; j++){
			if (show[i][j] == '*')
				count++;
		}
	}
	return count;
}


//第一步若是雷，修改坐标，在没有雷的地方布雷
void SafeFirst(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col){
	int x = 0;
	int y = 0;
	int count = 0;
	int empty = 1;
	if (mine[x][y] == '1'){
		mine[x][y] = '0';
		count = FindMineCount(mine, x, y);
		show[x][y] = count + '0';
	}                                                 
	while (empty){
		x = rand() % 9 + 1;
		y = rand() % 9 + 1;
		if (mine[x][y] == '0'){
			mine[x][y] = '1';
			empty--;
		}
		
	}
}

//一次要展开一片没有雷的地方，排查到的雷数作为边界
void ExtendBoard(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col,int x,int y){
	int count = FindMineCount(mine, x, y);
	if (count == 0){
		show[x][y] = ' ';
		if ((x - 1 > 0) && (y > 0) && (show[x - 1][y] == '*'))
			ExtendBoard(mine, show, ROW, COL, x - 1, y);
		if ((x - 1 > 0) && (y - 1 > 0) && (show[x - 1][y - 1] == '*'))
			ExtendBoard(mine, show, ROW, COL, x - 1, y - 1);
		if ((x > 0) && (y - 1 > 0) && (show[x][y - 1] == '*'))
			ExtendBoard(mine, show, ROW, COL, x, y - 1);
		if ((x + 1 > 0) && (y + 1 > 0) && (show[x + 1][y + 1] == '*'))
			ExtendBoard(mine, show, ROW, COL, x + 1, y + 1);
		if ((x + 1 > 0) && (y > 0) && (show[x + 1][y] == '*'))
			ExtendBoard(mine, show, ROW, COL, x + 1, y);
		if ((x + 1 > 0) && (y + 1 > 0) && (show[x + 1][y + 1] == '*'))
			ExtendBoard(mine, show, ROW, COL, x + 1, y + 1);
		if ((x > 0) && (y + 1 > 0) && (show[x][y + 1] == '*'))
			ExtendBoard(mine, show, ROW, COL, x, y + 1);
		if ((x - 1 > 0) && (y + 1 > 0) && (show[x - 1][y + 1] == '*'))
			ExtendBoard(mine, show, ROW, COL, x - 1, y + 1);
	}
	else
		show[x][y] = count + '0';
}
