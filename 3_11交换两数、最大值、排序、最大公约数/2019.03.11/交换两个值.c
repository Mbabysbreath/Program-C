//1.（1）交换数

//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//int  main(){
//	int a, b, t;
//	a = 0; b = 0; t = 0;
//	scanf("%d%d", &a, &b);
//	t = a;
//	a = b;
//	b = t;
//	printf("a=%d, b=%d", a, b);
//	system("pause");
//	return 0;
//}

//1.（2）不设中间变量交换两数

//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	int a, b;
//	scanf("%d%d", &a, &b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("%d %d", a, b);
//	system("pause");
//	return 0;
//}

//2.找最大值

//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	int i, j, max, a[10];
//	for (i = 0; i < 10; i++)
//		scanf("%d", &a[i]);
//	max = a[0];
//	for (j = 0; j < 10; j++){
//		if (a[j] >= max)
//			max = a[j];
//	}
//	printf("%d", max);
//	system("pause");
//	return 0;
//}
	
//3.三个数由大到小排序

//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	int i, a, b, c, t;
//	for (i = 0; i < 3; i++){
//		scanf("%d%d%d", &a, &b, &c);
//		if (a < b){
//			if (a < c)
//			{
//				t = a; a = c; c = t;
//
//				if (a < b)
//				{
//					t = a; a = b; b = t;
//				}
//			}
//			else
//			{
//				t = a; a = b; b = t;
//			}
//		}
//		printf("%d%d%d", a, b, c);
//	}
//	system("pause");
//	return 0;
//}

//4.找两个数最大公约数

//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	int a, b,i,max;
//	scanf("%d%d", &a, &b);
//	for (i = 1; i <= a; i++){
//		if (a%i == 0){
//			if (b%i == 0)
//				max = i;
//				
//		}
//	}printf("%d ", max);
//	system("pause");
//	return 0;
//}