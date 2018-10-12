#ifndef __GAME_H_
#define __GAME_H_
#define ROW 3
#define COL 3
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
int IsFull(char board[ROW][COL], int row, int col);
char IsWin(char board[ROW][COL], int row, int col);


//X 电脑赢
//* 玩家赢
//q 平局，棋盘满
//  游戏继续

#endif __GAME_H_
