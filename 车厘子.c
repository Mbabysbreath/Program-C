#define _CRT_SECURE_NO_WARNINGS   1
#include<stdio.h>
#include<stdlib.h>
int cherry(int n, int m){
	if (n == 1){
		return m;
	}
	else{
		return cherry(n - 1, (m + 1) * 2);
	}
}
int main(){
	int n = 0, m = 0;
	int t = 0;
	while (scanf("%d%d%d", &n, &m, &t) != EOF){
		printf("%d\n", t*cherry(n, m));
	}
	system("pause");
	return 0;
}