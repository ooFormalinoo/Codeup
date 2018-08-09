#include<iostream>
#include<vector>
#include<map>
using namespace std;
int n,m;
int si,sj,ei,ej;
int date[20][20];
int num;
vector< pair<int,int> > ans;

void DFS(int x,int y){
	ans.push_back(make_pair(x,y));
	if(x==ei&&y==ej){
		for(int i=0;i<ans.size();i++){
			printf("(%d,%d)",ans[i].first,ans[i].second);;
			if(i!=ans.size()-1) printf("->");
		}
		num++;
		cout<<endl;
		return;
	}
	if(date[x][y-1]==1){
		date[x][y-1]=0;
		DFS(x,y-1);
		ans.pop_back();
		date[x][y-1]=1;
	}
	if(date[x-1][y]==1){
		date[x-1][y]=0;
		DFS(x-1,y);
		ans.pop_back();
		date[x-1][y]=1;
	}
	if(date[x][y+1]==1){
		date[x][y+1]=0;
		DFS(x,y+1);
		ans.pop_back();
		date[x][y+1]=1;
	}
	if(date[x+1][y]==1){
		date[x+1][y]=0;
		DFS(x+1,y);
		ans.pop_back();
		date[x+1][y]=1;
	}
}
int main(){
	while(scanf("%d%d",&n,&m)!=EOF){
		num=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				scanf("%d",&date[i][j]);
			}
		}
		scanf("%d%d%d%d",&si,&sj,&ei,&ej);
		date[si][sj]=0;
		DFS(si,sj);
		if(num==0) cout<<-1<<endl;
	}
	return 0;
} 

