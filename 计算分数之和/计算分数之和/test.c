//算1 / 1 - 1 / 2 + 1 / 3 - ..... - 1 / 100的值
#define _crt_secure_no_warnings   1
#include<stdio.h>
#include<stdlib.h>
//
int main(){
	int i, flag = 1;
	float sum1 = 0.0, sum2 = 0.0, sum;
	for (i = 1; i <= 100; i++){
		if (i % 2 != 0)
			sum1 += 1.0 / i;
		else
			sum2 += 1.0 / i;
		//sum1 = sum1 + flag*(1.0 / i);
		//flag = -flag;
	}
	//printf("%f %f ", sum1, sum2);
	sum = sum1 - sum2;
	printf("%f", sum);
	system("pause");
	return 0;
}
