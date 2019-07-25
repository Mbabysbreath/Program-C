#include<cstdio>
#include<iostream> 
using namespace std;
int main(){
	int n,m,cnt;
	while(cin>>n){
		cnt=0;
		for(int i=0;i<n;i++){
			scanf("%d",&m);
			cnt^=m;
		}
		if(cnt==0){
			cout<<"second"<<endl;
		}else{
			cout<<"first"<<endl;
		}
	}
	return 0;
}
