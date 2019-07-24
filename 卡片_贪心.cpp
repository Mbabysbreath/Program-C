#include<cstdio> 
#include<iostream>
#include <algorithm>
using namespace std;
const int maxn=1e6+3;
int arr[maxn];
int n;
int Find(int arr[],int n){
	int count=0;
	sort(arr,arr+n);
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
		cout<<endl;
	for(int i=0;i<n;i++){
		if((i+1)<n&&arr[i]==arr[i+1]){
			printf("相等");
			count++;
			i=i+1;
		}else if((i+1)<n&&(i+2)<n
				&&(arr[i+1]==arr[i]+1)
				&&(arr[i+2]==arr[i]+2)){
				printf("连续");
				count++;
				i+=2;
			}
		}
	return count;
}
int main(){
	while(cin>>n){
		if(n==0){
			break;
		}
		for(int i=0;i<n;i++){
			scanf("%d",&arr[i]);
		}
		cout<<Find(arr,n)<<endl;
	}
	return 0;
}
