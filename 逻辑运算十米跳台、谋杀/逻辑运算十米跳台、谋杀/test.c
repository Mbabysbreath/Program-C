#define _CRT_SECURE_NO_WARNINGS   1
//1.
//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
//A3 B1 C5 D2 E4

//1.10米跳台名次预测

#include<stdio.h>
#include<stdlib.h>
int main(){
	int i = 0;
	int a, b, c, d, e;
	for (a = 1; a <= 5; a++)
		for(b = 1; b <= 5; b++)
			for (c = 1; c <= 5; c++)
				for (d = 1; d <= 5; d++)
					for (e = 1; e <= 5; e++){
						if (((a == 3) + (b == 2) == 1) &&   //printf("ss,\n","ee\n")连续输出
							((b == 2) + (e == 4) == 1) &&
							((c == 1) + (d == 2) == 1) &&
							((d == 3) + (c == 5) == 1) &&
							((e == 4) + (a == 1) == 1)&&
                          (a*b*c*d*e==120))
							/*(a!=b&&a!=c&&a!=d&&a!=e
							&&b!=c&&b!=d&&b!=e
							&&c!=d&&c!=e
							&&d!=e)*/
						{
							printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
						}
					}
	system("pause");
	return 0;
}


