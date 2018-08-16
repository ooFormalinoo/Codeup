#include<iostream>
using namespace std;

int father[1010];

void init(int n){
	for(int i=1;i<=n;i++){
		father[i]=i;
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
	if(A!=B) father[A]=B;
}
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		int n,m;
		scanf("%d%d",&n,&m);
		init(n);
		int a,b;
		for(int i=0;i<m;i++){
			scanf("%d%d",&a,&b);
			Union(a,b);
		}
		int ans=0;
		for(int i=1;i<=n;i++){
			if(father[i]==i){
				ans++;
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}
