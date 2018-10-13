#include"game.h"

void InitBoard(char arr[ROWS][COLS], int rows, int cols, char set){
	memset(&arr[0][0], set, rows*cols*sizeof(arr[0][0]));
}

void DisplayBoard(char arr[ROWS][COLS], int row, int col){
	int i = 0;
	int j = 0;
	//��ӡ�к�
	for (i = 0; i <= row; i++){
		printf("%d ", i);
	}
	printf("\n");

	//��ӡ����
	for (i = 1; i <= row; i++){
		printf("%d ", i);// �к�
		for (j = 1; j <= col; j++){
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

//����
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


//����
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col){
	int x = 0;
	int y = 0;
	int  count = 0;
	while (1){
		printf("������Ҫ�Ų������->\n");
		scanf("%d,%d", &x, &y);
		if (x >= 1 && x <= 9 && y >= 1 && y <= 9){ //����Ҫ�Ϸ�
			if (mine[x][y] == '1'){                //����һ���ŵ��ף����������Ϊ��0��
				SafeFirst(mine,show,ROW,COL);  //���ҵ�һ����0���ĵط�������Ϊ��
				DisplayBoard(show, ROW, COL);
				break;
			}
			else{				                  //�Ų���Χ�׵ĸ���
				count = FindMineCount(mine, x, y);
				show[x][y] = count + '0';
				ExtendBoard(mine, show, ROW, COL, x, y);
				DisplayBoard(show, ROW, COL);
			
			}

		}
		else
			printf("�������겻�Ϸ�������������\n");
			
	}
	if (IsWin(show, ROW, COL) == EASY_COUNT){
		printf("��ϲ�㣡���׳ɹ�!\n");
		DisplayBoard(show, ROW, COL);
	}
}

//�Ų���Χ�׵ĸ���
//�Ų�����λ�õ���Χ�˸���û���ף�ǰ�Ὣ����Ϊ��1��������֮��Ϊ���٣�ע���ַ������ֵ�ת��
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

//�ж���Ӯ�������û�б�ը�������������Ų������е����껹ʣ��ʮ���׼�Ϊ�׵ĸ��������׳ɹ�
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


//��һ�������ף��޸����꣬��û���׵ĵط�����
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

//һ��Ҫչ��һƬû���׵ĵط����Ų鵽��������Ϊ�߽�
int ExtendBoard(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col,int x,int y){
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