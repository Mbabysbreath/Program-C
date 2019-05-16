#include<stdio.h>
#include<stdlib.h>
//1-4可以组成几个三位数且每位上的数字不重复
int main(){
	system("color 0a");
	int a, b, c;
	int sum1, sum2, sum21, SUM;
	for (a = 1; a <= 4; a++){
		sum1 = a * 100;
		for (b = 1; b <= 4; b++){
			if (a == b)continue;
			sum2 = b * 10;
			sum21 = sum1 + sum2;
			for (c = 1; c <= 4; c++){
				if (b == c||a==c)continue;
				SUM = sum21 + c;
				printf("%5d", SUM);
			}
		}
	}
	return 0;
}