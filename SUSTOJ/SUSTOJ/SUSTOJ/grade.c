#define _CRT_SECURE_NO_WARNINGS   1
#include<stdio.h>
#include<stdlib.h>
#define maxn  15//防止越界
int main(){
	int num = 0;//测试学生个数
	int n = 0, m = 0;//n门课，选m门考试
	int temp = 0;
	scanf("%d", &num);
	for (int i = 0; i < num; i++){
		double sum = 0;
		scanf("%d%d", &n, &m);
		if (m >= 1 && m <= n&&n <= 10){
			int score[maxn] = { 0 };
			for (int j = 0; j < n; j++){//输入任课老师印象分
				scanf("%d", &score[j]);
			}
			for (int i = 0; i < n - 1; i++){//给成绩排序
				for (int j = 0; j < n - 1 - i; j++){//要有两层循环,不然只会确定第一个数的位置
					if (score[j] < score[j + 1]){
						temp = score[j];
						score[j] = score[j + 1];
						score[j + 1] = temp;
					}
				}
			}
			for (int k = 0; k < m; k++){
				sum += score[k];
			}
		}
		printf("%.2f\n", sum / m * 1.0);
	}
	system("pause");
  
	return 0;
}