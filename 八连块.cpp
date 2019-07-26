#include<cstdio>
#include<cstring>
using namespace std;
const int maxn=100+8;
char oil[maxn][maxn];//油田 
int vis[maxn][maxn];//标记被访问的油田 
int n,m; 
int count;
void dfs(int x,int y){
	
	if(x<0||x>=n||y<0||y>=m){//越界 
		return ;
	}
	if(oil[x][y]!='@'||vis[x][y]) {
		return ;
	}
		
	vis[x][y]=1;
	int i,j; 
	for( i=-1;i<=1;i++){
		for(j=-1;j<=1;j++){
			if(i||j){
				dfs(x+i,y+j);
			}	
		}
	}
}
int main(){
	while(scanf("%d%d",&n,&m)==2&&n&&m){
		memset(vis,0,sizeof(vis));
		count=0;
		int i,j;
		for( i=0;i<n;i++){
			scanf("%s",oil[i]);	
		}
		for( i=0;i<n;i++){
			for( j=0;j<m;j++){
				if((oil[i][j]=='@')&&(!vis[i][j])){
				//printf("-----------");
					dfs(i,j);
					count++;
				}
			}
		}	
		printf("%d\n",count);
	}
	return 0;
}
