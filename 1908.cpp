#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

int G[1010][1010];
bool vst[1010];

void DFS(int u,int n){
	vst[u]=true;
	for(int i=1;i<=n;i++){
		if(G[u][i]==1&&vst[i]==false){
			vst[i]=true;
			DFS(i,n);
		}
	}
}

int DFSTrave(int n){
	int ans=0;
	for(int i=1;i<=n;i++){
		if(vst[i]==false){
			ans++;
			DFS(i,n);
		}
	}
	return ans;
}
int main(){
	int n,m;
	while(scanf("%d%d",&n,&m)){
		if(n==0) break;
		memset(G,0,sizeof(G));
		memset(vst,0,sizeof(vst));
		int a,b;
		for(int i=0;i<m;i++){
			scanf("%d%d",&a,&b);
			G[a][b]=G[b][a]=1;
		}
		int ans=DFSTrave(n);
		if(ans==1) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
