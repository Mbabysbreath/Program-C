//计算从1—100出现9的次数
#define _CRT_SECURE_NO_WARNINGS   1
#include<stdio.h>
#include<stdlib.h>
int main(){
	int i, a=0;
	for (i = 1; i <= 100; i++){
		if (i % 10 == 9)
		{
			printf("%d ", i);
			a++;
		}
		if (i / 10 == 9)
		{
			printf("%d ", i);
			a++;
		}
	}
	printf("\n共出现%d次",a);
	system("pause");
	return 0;
}
