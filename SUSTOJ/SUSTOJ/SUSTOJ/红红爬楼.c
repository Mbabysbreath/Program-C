#define _CRT_SECURE_NO_WARNINGS   1
#include<stdio.h>
#include<stdlib.h>
int Floor(int n){
	if (n == 1){
		return 1;
	}
	else if (n == 2){
		return 2;
	}
	if (n == 0){
		return 0;
	}
	else{
		return Floor(n - 1) + Floor(n - 2);
	}
}
int main(){
	int n = 0;
	scanf("%d", &n);
	printf("%d", Floor(n));
	system("pause");
	return 0;
}