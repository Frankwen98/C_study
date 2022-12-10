#include <stdio.h>
#include "game.h"

void game() {
	//�洢����
	char board[ROW][COL];
	//��ʼ�����̡��ո�
	InitBoard(board, ROW, COL);
	//��ӡһ������ - ��ӡ���������
	DisplayBoard(board, ROW, COL);
	char ret = 0;//������Ϸ״̬
	while (1)
	{ 
	//�������
	PlayerMove(board,ROW,COL);
	DisplayBoard(board, ROW, COL);

	//��������
	ComputerMove(board, ROW, COL);
	DisplayBoard(board, ROW, COL);

	//�жϵ����Ƿ�Ӯ����Ϸ
	ret = IsWin(board, ROW, COL);
	if (ret != 'C')
		break;	
	}
	switch (ret) {
	case '*':
		printf("��ϲ��Ӯ��!!!\n");
		break;
	case '#':
		printf("��Ǹ������!!!\n");
		break;
	case 'Q':
		printf("ƽ����!!!\n");
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
		printf("��ѡ��>");
		scanf("%d",  &input);		
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}

	} while (input);

	return 0;
}
