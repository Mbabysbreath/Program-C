#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
const int maxn= 100;
int row[maxn] = { 0 };//֮ǰ�Ѿ��ºõĻʺ��׼ȷλ��
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
	for (i = 0; i < 9; i++){//i���ڷŵĻʺ��λ��������
		for (j = 0; j < now; j++){//j�Ѿ��źõĻʺ�����������ʱ�����꣬row[j]������
			if (i == row[j] || abs(now - j) == abs(i - row[j]))
				break;//�л�б������
			
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

