#include<cstdio>
#include<queue>
#include<stack>
#include<cstring>
using namespace std;
const int maxn=10+3;
int map[maxn][maxn];//地图
int vis[maxn][maxn];//记录被访问过的点，去重
int step[maxn][maxn];//step[i][j],表示起点（i，j）的最小路径 
int dx[]={-1,1,0,0};//方向数组 
int dy[]={0,0,1,-1}; 
 struct node{//设一个点表示当前信息 
	int x;//当前点的行 
	int y;//当前点的列 
	int count;// 走到当前点的步数
	node(int x=0,int y=0,int count=0){
		this->x=x;
		this->y=y;
		this->count=count;
	} 
}; 
node fa[maxn][maxn];//打印回溯结点,记录当前结点的父节点
int check(int x,int y){
	if(map[x][y]==1||vis[x][y]==1){
		return 0;
	}
	if(x<0||x>5||y<0||y>5){
		return 0;
	}
	return 1;
}
 
 void bfs(){
 	memset(vis,0,sizeof(vis));
 	queue<node>q;
	node now;//设一个当前的临时节点
	now.x=0;now.y=0;now.count=0;//初始化now 
	q.push(now);//起点入队
	step[now.x][now.y] =0;
	 
	 while(!q.empty()){
	 	now=q.front();//?????
	 	q.pop();
	 	vis[now.x][now.y]=1;//标记
		 step[now.x][now.y]=now.count;
		 if(now.x==4&&now.y==4){//到终点 
		 	return ;
		 }
		 for(int i=0;i<4;i++){
		 	node next;//下一步的=所在点 
		 	next.x=	now.x +dx[i];//在横坐标找可以访问的点；
			next.y=now.y+dy[i];//
			if(check(next.x,next.y)) {
				next.count=now.count+1;
				q.push(next);
				fa[next.x][next.y]=now; //now走到next，now是next的父节点 
			}
		 }
	 }
	 return; 
 }
 void print_path(node u){
 	stack<node>s;
 
 	for(;;){	
	 s.push(u);
 		if(step[u.x][u.y]==0){//找到起点 
 			break ;
		 }
		 u=fa[u.x][u.y];////回溯 
	 }
	 while(!s.empty()){
	 	printf("(%d, %d)\n",(s.top()).x,(s.top()).y);
	 	s.pop();
	 } 
	 return ;
 }
 int main(){
 	for(int i=0;i<5;i++){
 		for(int j=0;j<5;j++){
 			scanf("%d",&map[i][j]);
		 }
	 }
	 bfs();
//	 printf("%d\n",step[4][4]);
	 node ans(4,4,step[4][4]);
	 print_path(ans);
	 return 0;
 }
