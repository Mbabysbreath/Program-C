#include<cstdio>
#include<iostream>
using namespace std;
#define maxn 1000+3
int bin[maxn];
 
int findx(int x)
{
    int r=x;
    while(bin[r]!=r)
        r=bin[r];
    return r;
}
void merge(int x,int y)
{
    int fx,fy;
    fx = findx(x);
    fy = findx(y);
    if(fx != fy)
      bin[fx]=fy;
}
 
 
int main()
{
    int n,m,x,y;
    while(cin>>n>>m&&n!=0)//n个城镇 
    {
        for(int i=0;i<n;i++)
            bin[i] = i;
        for(int i=m;m>0;m--)//m条路 
        {
        	cin>>x>>y;//x和y之间有路 
            merge(x,y);
        }
        int count=-1; 
        for( int i=0;i<n;i++)
            if(bin[i]==i)
                count++;
       // printf("%d\n",count);
       cout<<count<<endl;
    }
    return 0;
}

