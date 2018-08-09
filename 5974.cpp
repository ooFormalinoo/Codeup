//DFS算法
//当2种方式相加得到相同的素数时算2种 
#include<iostream>
#include<cmath>
#include<set>
using namespace std;
int N,K,ans;
int date[30];
bool prime(int a){
	for(int i=2;i<=sqrt(a);i++){
		if(a%i==0) return false;
	}
	return true;
}
void DFS(int index,int k,int sum){
	if(k==K&&prime(sum)){
		ans++;
		return;
	}
	if(index==N||k>K) return;
	DFS(index+1,k,sum);
	DFS(index+1,k+1,sum+date[index]);
}
int main(){
	while(scanf("%d%d",&N,&K)!=EOF){
		for(int i=0;i<N;i++){
			scanf("%d",&date[i]);
		}
		DFS(0,0,0);
		printf("%d\n",ans);
		ans=0;
	}
	return 0;
}
