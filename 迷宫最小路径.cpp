#include<cstdio>
#include<queue>
#include<stack>
#include<cstring>
using namespace std;
const int maxn=10+3;
int map[maxn][maxn];//��ͼ
int vis[maxn][maxn];//��¼�����ʹ��ĵ㣬ȥ��
int step[maxn][maxn];//step[i][j],��ʾ��㣨i��j������С·�� 
int dx[]={-1,1,0,0};//�������� 
int dy[]={0,0,1,-1}; 
 struct node{//��һ�����ʾ��ǰ��Ϣ 
	int x;//��ǰ����� 
	int y;//��ǰ����� 
	int count;// �ߵ���ǰ��Ĳ���
	node(int x=0,int y=0,int count=0){
		this->x=x;
		this->y=y;
		this->count=count;
	} 
}; 
node fa[maxn][maxn];//��ӡ���ݽ��,��¼��ǰ���ĸ��ڵ�
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
	node now;//��һ����ǰ����ʱ�ڵ�
	now.x=0;now.y=0;now.count=0;//��ʼ��now 
	q.push(now);//������
	step[now.x][now.y] =0;
	 
	 while(!q.empty()){
	 	now=q.front();//?????
	 	q.pop();
	 	vis[now.x][now.y]=1;//���
		 step[now.x][now.y]=now.count;
		 if(now.x==4&&now.y==4){//���յ� 
		 	return ;
		 }
		 for(int i=0;i<4;i++){
		 	node next;//��һ����=���ڵ� 
		 	next.x=	now.x +dx[i];//�ں������ҿ��Է��ʵĵ㣻
			next.y=now.y+dy[i];//
			if(check(next.x,next.y)) {
				next.count=now.count+1;
				q.push(next);
				fa[next.x][next.y]=now; //now�ߵ�next��now��next�ĸ��ڵ� 
			}
		 }
	 }
	 return; 
 }
 void print_path(node u){
 	stack<node>s;
 
 	for(;;){	
	 s.push(u);
 		if(step[u.x][u.y]==0){//�ҵ���� 
 			break ;
		 }
		 u=fa[u.x][u.y];////���� 
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
