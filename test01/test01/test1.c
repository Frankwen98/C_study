#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
//1�� n!�Ľ׳����

//int main() {
//	int a = 0;
//	int b = 0;
//	int c = 1;
//	int n = 0;
//	 for(n=1; n <=4;n++)
//	 { 
//		c = 1;
//	    for (a = 1;a <= n; a++)
//		{
//			c *= a; 
//		}
//			
//			b += c;
//	 }
//	
//  	      printf("%d", b);
//	
//	return 0;
//}

// ���ַ��������������е�����n

//int main() {
//
//	int arr [] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz-1;
//	
//	while (left <= right) 
//	{
//	int mid = (left + right) / 2;
//	if (arr[mid] < k) {
//
//		left = mid + 1;
//	}
//	else if (arr[mid] > k) {
//		right = mid - 1;
//	}
//	else {
//		printf("�ҵ��ˣ��±���%d", mid);
//		break;
//
//	}
//	}
//	if(left>right)
//	{
//		printf("�Ҳ�����");
//		
//	}
//	return 0;
//}

//ģ�����ε�¼��������¼ʧ���˳�
//int main() {
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:");
//		scanf("%s", password);
//		if (strcmp(password, "12345") == 0)
//		{
//			printf("��¼�ɹ�");
//			break;
//		}
//		else 
//		{
//			printf("�����������������\n");
//		}
//		
//	}
//	if (i == 3)
//		printf("����������������˳�����");
//	
//	return 0;
//}

//1-100����� ������
void game() {

	int ret = rand()%100+1;
	int guess = 0;
	while (1)
	{
		printf("���1~100������\n:>");
		scanf("%d", &guess);

		if (guess < ret) {
			printf("��С��\n");
		}
		else if (guess >ret){
			printf("�´���\n");
		}
		else {
			printf("��ϲ��¶��ˣ�\n");
			break;
		}

	}
	
}

void begin() {
	printf("*****1.��ʼ��Ϸ*****\n");
	printf("*****0.�˳���Ϸ*****\n");
}
int main() {
	
	int input = 0;
	srand((unsigned int)time(NULL));
	
	do 
	{
		begin();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
			{
			case 1:
				game();
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("������ѡ��\n");
				break;
			}

	} while (input);
	
	
	return 0;

}