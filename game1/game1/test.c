#include <stdio.h>
#include "game.h"

void game() {
	//存储数据
	char board[ROW][COL];
	//初始化键盘‘空格’
	InitBoard(board, ROW, COL);
	//打印一下棋盘 - 打印数组的内容
	DisplayBoard(board, ROW, COL);
	char ret = 0;//接受游戏状态
	while (1)
	{ 
	//玩家下棋
	PlayerMove(board,ROW,COL);
	DisplayBoard(board, ROW, COL);

	//电脑下棋
	ComputerMove(board, ROW, COL);
	DisplayBoard(board, ROW, COL);

	//判断电脑是否赢得游戏
	ret = IsWin(board, ROW, COL);
	if (ret != 'C')
		break;	
	}
	switch (ret) {
	case '*':
		printf("恭喜您赢了!!!\n");
		break;
	case '#':
		printf("抱歉您输了!!!\n");
		break;
	case 'Q':
		printf("平局了!!!\n");
		break;
	}
	DisplayBoard(board, ROW, COL);
}
void menu()

{
	printf("***********************\n");
	printf("******  1.play  *******\n");
	printf("******  0.exit  *******\n");
	printf("***********************\n");
}
int main(){

	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("请选择：>");
		scanf("%d",  &input);		
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
		default:
			printf("选择错误，重新选择\n");
			break;
		}

	} while (input);

	return 0;
}
