#pragma once
#define ROW 3
#define COL 3
#include <stdlib.h>
#include <time.h>

//����������
void InitBoard(char board[ROW][COL], int row, int col);

//��ӡ���̵ĺ���
void DisplayBoard(char board[ROW][COL],int row,int col);

//�������
void PlayMove(char board[ROW][COL], int row, int col);

//��������
void ComputerMove(char board[ROW][COL], int row, int col);

//�ж������Ƿ����� ����������˷���1����������0
int IsFull(char board[ROW][COL], int row, int col);

//1.���Ӯ��-*
//2.����Ӯ��-#
//3.ƽ��-Q
//4.����-C

//�ж�ʤ��
char IsWin(char board[ROW][COL], int row, int col);