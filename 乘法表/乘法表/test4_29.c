#define _CRT_SECURE_NO_WARNINGS   1
#include<stdio.h>
#include<stdlib.h>
void mul(int n){
	int i, j;
	int sum = 1;
	for (i = 1; i <= n; i++){
		for (j = 1; j <= i; j++){
			sum = i*j;
			printf("%d*%d=%-2d ", j, i, sum);//%2d 右对齐  %-2d 左对齐；
		}
		printf("\n");
	}
}
int main(){
	int t = 1;
	printf("请输入行数：");
	scanf("%d", &t);
	mul(t);
	system("pause");
	return 0;
}
