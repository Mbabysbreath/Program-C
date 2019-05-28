#define _CRT_SECURE_NO_WARNINGS   1
#include<stdio.h>
#include<stdlib.h>//RAND_MAX 32767 F12
#include<time.h>
#include<string.h>
//1.猜数游戏

void menu(){
	printf("********************************\n");
	printf("***********1. play**************\n");
	printf("***********2. exit**************\n");
	printf("********************************\n");
}
void game(){
	int input = 0;
	int random = rand() % 100;//限定随机数范围0—99，0—n rand()%(n+1）；a~b rand()%(b-a+1)+a 1.23~7.58 a~b%100
	while (1){//（n!=r)
		printf("请输入要猜的数字：");
		//scanf("%d", &input);//
		while (!scanf("%d", &input)){
			getchar();
		}//不管输入什么都可以进行判断，通过scanf的返回值
		//getchar();
		if (input > random){
			printf("猜大了\n");
		}
		else if (input < random){
			printf("猜小了\n");
		}
		else{
			printf("猜对了\n");
			break;
		}
	}
}
int main(){
	int input = 0;
	srand((unsigned)time(NULL));//<time.h> 1970到现在的秒数
	do{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input){
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("选择错误，请重选：\n");
			break;
		}
	} while (input);
	system("pause");
	return 0;
}
