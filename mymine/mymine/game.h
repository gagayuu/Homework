#ifndef __GAME_H_
#define __GAME_H_
#define _CRT_SECURE_NO_WARNINGS 
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EASY_COUNT 10

#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>

void InitBoard(char arr[ROWS][COLS], int rows, int cols, char set);
void DisplayBoard(char arr[ROWS][COLS], int row, int col);
void SetMine(char arr[ROWS][COLS], int row, int col);
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col);
int FindMineCount(char mine[ROWS][COLS], int x, int y);
int IsWin(char show[ROWS][COLS],int row,int col);
void SafeFirst(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
int ExtendBoard(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);

#endif //__GAME_H_

