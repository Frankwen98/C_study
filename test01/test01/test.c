#define _crt_secure_no_warnings
#include<stdio.h>
求两个数的较大值
int max(int x,int y)
{
	if (x>y)
		return x;
	else
		return y;
}
int main()
{
	求两个数的较大值 10 20
	int a = 0;
	int b = 0;
	scanf_s("%d %d", &a, &b);

	int m = max(a, b);
	printf("%d\n", m);
	return 0;
}
int main(){
	int m = 0;
	scanf("%d", &m);

	if (m % 5 == 0)
		printf("yes\n");
	else
		printf("no\n");

	

	
	return 0;

}