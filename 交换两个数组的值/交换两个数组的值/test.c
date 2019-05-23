#define _CRT_SECURE_NO_WARNINGS   1
// 交换两个数组的值
#include<stdio.h>
#include<stdlib.h>
int main(){  //1.把a的给c,c的给b,b给a；三个循环  2.如下
	int a[5] = { 1, 2, 3, 4, 5 }, b[5] = { 6, 7, 8, 9, 10 };
	int c[5];//int tmp;
	int i=0;
	for (i = 0; i < 5; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
	for (i = 0; i < 5; i++){
		printf("%d ", b[i]);
	}
	printf("\n");
	for (i = 0; i < 5; i++){//数组遍历
		c[i] = a[i];//tmp=a[i];
		a[i] = b[i];
		b[i] = c[i];
	}
	printf("a[i]:");
	for (i = 0; i < 5; i++){
		printf("%d ", a[i]);
	}
	printf("\nb[i]:");
	for (i = 0; i < 5; i++){
		printf("%d ", b[i]);
	}
	system("pause");
	return 0;
}
