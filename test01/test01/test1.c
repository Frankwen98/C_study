#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
//1到 n!的阶乘相加

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

// 二分法查找有序数组中的整型n

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
//		printf("找到了，下标是%d", mid);
//		break;
//
//	}
//	}
//	if(left>right)
//	{
//		printf("找不到了");
//		
//	}
//	return 0;
//}

//模拟三次登录操作，登录失败退出
//int main() {
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:");
//		scanf("%s", password);
//		if (strcmp(password, "12345") == 0)
//		{
//			printf("登录成功");
//			break;
//		}
//		else 
//		{
//			printf("密码错误，请重新输入\n");
//		}
//		
//	}
//	if (i == 3)
//		printf("三次密码输入错误，退出程序");
//	
//	return 0;
//}

//1-100随机数 猜数字
void game() {

	int ret = rand()%100+1;
	int guess = 0;
	while (1)
	{
		printf("请猜1~100的数字\n:>");
		scanf("%d", &guess);

		if (guess < ret) {
			printf("猜小了\n");
		}
		else if (guess >ret){
			printf("猜大了\n");
		}
		else {
			printf("恭喜你猜对了！\n");
			break;
		}

	}
	
}

void begin() {
	printf("*****1.开始游戏*****\n");
	printf("*****0.退出游戏*****\n");
}
int main() {
	
	int input = 0;
	srand((unsigned int)time(NULL));
	
	do 
	{
		begin();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
			{
			case 1:
				game();
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("请重新选择\n");
				break;
			}

	} while (input);
	
	
	return 0;

}