#define _CRT_SECURE_NO_WARNINGS   1
#include<stdio.h>
#include<stdlib.h>
void HelloSUST(int n){
	int i = 0;
	for (i = 0; i < n; i++){
		if (n >= 0 && n <= 100){
			printf("Hello SUST!\n");
		}
	}
}
int main(){
	int n = 0;
	scanf("%d",&n);
	HelloSUST(n);
	system("pause");
	return 0;
}
