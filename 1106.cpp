#include<iostream>
using namespace std;

int father[1010];

void init(int n){
	for(int i=1;i<=n;i++){
		father[i]=i;
	}
}

int findFather(int n){
	int r,k,j;
	r=n;
	while(father[r]!=r){
		r=father[r];
	}
	k=n;
	while(k!=r){
		j=father[k];
		father[k]=r;
		k=j;
	}
	return r;
}
void Union(int a,int b){
	int A=findFather(a);
	int B=findFather(b);
	if(A!=B) father[A]=B;
}
int main(){
	int m,n;
	while(scanf("%d%d",&n,&m)){
		if(n==0&&m==0) break;
		init(n);
		int a,b;
		for(int i=0;i<m;i++){
			scanf("%d%d",&a,&b);
			Union(a,b);
		}
		int ans=1;
		for(int i=1;i<=n;++i)
		{
			if(findFather(i)!=findFather(1))
			{
				ans++;
			}
		}
		if(ans==1&&m==n-1)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
} 
