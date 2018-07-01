//用最普通的方法分累加求顺逆时针的距离之后比较会超时
//创建数组存放的是从第一个点到该点顺时针的距离，在读入数据的时候直接生成数据
//求i、j两点之间的距离用1到j的距离减去1到i的距离（要保证i<j）
//逆时针距离用整个环的长度减去顺时针距离
#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int a[100010]={0};//a[i]是1到i的长度，a[N+1]是整个环的长度
	int N,M,d;
	scanf("%d",&N);
	for (int i=1;i<=N;i++){ 
		scanf("%d",&d);
		a[i+1]=a[i]+d;
	}
	scanf("%d",&M);
	while(M--){
		int e1,e2;
		int d1=0,d2=0;
		scanf("%d%d",&e1,&e2);
		if(e1>e2){//保证e1<e2
			int temp=e1;
			e1=e2;
			e2=temp;
		}
		d1=a[e2]-a[e1];//e1到e2顺时针距离
		d2=a[N+1]-d1;//逆时针距离
		if(d1<=d2) printf("%d\n",d1);
		else printf("%d\n",d2);
	}
	return 0;
} 
