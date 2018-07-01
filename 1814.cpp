#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int L,M;
	int x,y;
	int tree[10001];
	while(scanf("%d %d",&L,&M)!=EOF){
		if(L==0&&M==0) break;
		memset(tree,0,sizeof(tree));
		int sum=0;
		while(M--){
			scanf("%d %d",&x,&y); 
			for(int i=x;i<=y;i++){
				tree[i]=1;
			}			
		}
		for(int j=0;j<=L;j++){
				if(tree[j]==0){
					sum++;
				}
		}
		printf("%d\n",sum);
		
	}
	return 0;
}
