#include<stdio.h>
#include<stdlib.h>
int a[101], n;
void quicksort(int left, int right){
	int i, j, t, temp;
	if (left > right)
		return;

	temp = a[left];
	i = left;
	j = right;
	while (i != j){
		if (temp <= a[j] && i < j){
			j--;
		}
		if (temp >= a[i] && i < j){
			i++;
		}

		if (i < j){
			t = a[i];
		    a[i]= a[j];
		    a[j] = t;
		}
			
	}
	a[left] = a[i];
    a[i] = temp;
	quicksort( left, i - 1);
	quicksort(i + 1, right);
	return;
}
int main(){
	int i, j;
	printf("ÇëÊäÈëÅÅÐò¸öÊý£º");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++){
		scanf_s("%d", &a[i]);
	}
	quicksort(1, n);
	for (i = 1; i <= n; i++)
		printf("%d ", a[i]);
	system("pause");
	return 0;
}
