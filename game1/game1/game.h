#pragma once
#define ROW 3
#define COL 3
#include <stdlib.h>
#include <time.h>

//函数的声明
void InitBoard(char board[ROW][COL], int row, int col);

//打印棋盘的函数
void DisplayBoard(char board[ROW][COL],int row,int col);

//玩家下棋
void PlayMove(char board[ROW][COL], int row, int col);

//电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col);

//判断棋盘是否满了 如果棋盘满了返回1，不满返回0
int IsFull(char board[ROW][COL], int row, int col);

//1.玩家赢了-*
//2.电脑赢了-#
//3.平局-Q
//4.继续-C

//判断胜负
char IsWin(char board[ROW][COL], int row, int col);