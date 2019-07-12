#define _CRT_SECURE_NO_WARNINGS   1
#include<stdio.h>
#include<stdlib.h>
int Fibonacci(int x){
	if (x == 0 || x == 1){
		return 1;
	}
	else{
		return Fibonacci(x - 1) + Fibonacci(x - 2);
	}
}
int main(){
	int num = 0;
	
	scanf("%d", &num);
	if (num >= 0 && num <= 20){
		for (int i = 0; i < num; i++){
			int x = 0;
			scanf("%d", &x);
			printf("%d\n", Fibonacci(x));
		}
		system("pause");
		return 0;
	}
	}