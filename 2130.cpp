#include<iostream>
using namespace std;

int maxn=1;
int father[10000010];
int num[10000010];

void init(int n){
	for(int i=1;i<=n;i++){
		father[i]=i;
		num[i]=1;
	}
}
int findFather(int x){
	int r,k,j;
	r=x;
	while(r!=father[r]){
		r=father[r];
	}
	j=x;
	while(j!=r){
		k=father[j];
		father[j]=r;
		j=k;
	}
	return r;
}
void Union(int a,int b){
	int A=findFather(a);
	int B=findFather(b);
	if(A!=B) {
		father[A]=B;
		num[B]+=num[A];
		if(num[B]>maxn)
			maxn=num[B];
	}
}
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		maxn=1;
		init(10000000);
		int a,b;
		for(int i=0;i<n;i++){
			scanf("%d%d",&a,&b);
			Union(a,b);
		}
		printf("%d\n",maxn);
		
	}
}
