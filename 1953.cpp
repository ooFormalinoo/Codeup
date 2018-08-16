#include<iostream>
using namespace std;

int father[1010];

void init(int n){
	for(int i=1;i<=n;i++){
		father[i]=i;
	}
}
int findFather(int x){
	int r,j,k;
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
int Union(int a,int b){
	int A=findFather(a);
	int B=findFather(b);
	if(A!=B) father[A]=B;
}
int main(){
	int n,m;
	while(scanf("%d%d",&n,&m)){
		if(n==0) break;
		int a,b;
		init(n);
		for(int i=0;i<m;i++){
			scanf("%d%d",&a,&b);
			Union(a,b);
		}
		int ans=0;//根节点的数目 
		for(int i=1;i<=n;i++){
			if(father[i]==i){
				ans++;
			}
		}
		printf("%d\n",ans-1);
	}
	return 0;
}
