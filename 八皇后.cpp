#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
const int maxn= 100;
int row[maxn] = { 0 };//之前已经下好的皇后的准确位置
int flag = 0;
void queen(int now){
	
	if (now == 9&&flag==0){
		flag=1;
		int i; 
		for ( i = 0; i < 9; i++){
		//	printf("%d ", row[i]);
		cout<<(row[i]+1)<<" ";
			//flag = 0;
		}
	//	printf("\n");
	cout<<endl;
		return;
	}
	int i, j ;
	for (i = 0; i < 9; i++){//i正在放的皇后的位置纵坐标
		for (j = 0; j < now; j++){//j已经放好的皇后现在所处临时横坐标，row[j]纵坐标
			if (i == row[j] || abs(now - j) == abs(i - row[j]))
				break;//列或斜线重了
			
		}
		if (now == j){
			row[now] = i;
			queen(now + 1);
		}
	}
}
int main(){

	queen(0);
//	cout << endl;
//	system("pause");
	return 0;
}

