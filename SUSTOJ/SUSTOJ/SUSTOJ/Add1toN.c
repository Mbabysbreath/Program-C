#define _CRT_SECURE_NO_WARNINGS   1
#include<stdio.h>
#include<stdlib.h>
#include"time.h"
int main(){
	long start = clock(); {
		int N = 0;
		while (N >= 0 && N <= 100){
			int sum = 0;
			scanf("%d", &N);
			if (N != 0){
				sum = (1 + N)*N / 2;
				printf("%d\n", sum);
			}
			else {
				system("pause");
				return;
			}
				
		}
	}
	long finsh = clock();
	long t = finsh - start;
	printf("Run time is %3.2f\n", t);
	system("pause");
	return 0;
}
