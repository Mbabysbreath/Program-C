#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
#define maxn 1000+7
#define INF 0x3f3f3f3f
#define mem(a) memset(a,0,sizeof a)
int map[maxn][maxn];
int check[maxn];
int dis[maxn];
void init_map(int n,int m){
	for(int i=0;i<=n;++i){
		for(int j=0;j<=n;++j){
			map[i][j]=INF;
		}
	}
	int a,b,c;
	for(int i=1;i<=m;++i){
		cin>>a>>b>>c;
		if(map[a][b]>c){
			map[a][b]=c;
			map[b][a]=c;
		}
	}
}
int dijkstra(int n,int m){
	memset(check,0,sizeof check);
	mem(dis);
	for(int i=1;i<=n;++i)
		dis[i]=map[1][i];
		int pos=0;
		int minx=INF;
		check[1]=1;
		dis[1]=0;
		for(int i=1;i<n;++i){
			minx=INF;
			for(int j=1;j<=n;++j){
				if(!check[j]&&minx>dis[j]){
					minx=dis[j];
					pos=j;
				}
			}
			check[pos]=1;
			for(int j=1;j<=n;++j){
				if(!check[j]&&dis[j]>dis[pos]+map[pos][j]){
					dis[j]=dis[pos]+map[pos][j]; 
				}
			}
	
		}
		return dis[n];
}
int main(){
	int n,m;
	cin>>n>>m;
	init_map(n,m);
	dijkstra(n,m);
	cout<<dijkstra(n,m)<<endl;
	return 0;
} 
