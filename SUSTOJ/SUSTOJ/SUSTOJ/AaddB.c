#define _CRT_SECURE_NO_WARNINGS   1
#include<stdio.h>
#include<stdlib.h>
int main(){
	int a, b;
	while (scanf("%d %d", &a, &b) != EOF){
		if (a >= -1000 && b <= 1000){
			printf("%d\n", a + b);
		}
	}
	system("pause");
	return 0;
}