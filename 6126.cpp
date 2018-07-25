#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
	unordered_set<int> st[55];
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int num;
		scanf("%d",&num);
		for(int j=0;j<num;j++){
			int temp;
			scanf("%d",&temp);
			st[i].insert(temp);
		}
	}
	int k;
	scanf("%d",&k);
	while(k--){
		int i,j;
		scanf("%d%d",&i,&j);
		int Nc=0;
		for(auto it=st[i].begin();it!=st[i].end();it++){
			if(st[j].find(*it)!=st[j].end()){
				Nc++;
			}
		}
		int Nt=st[i].size()+st[j].size()-Nc;
		double ans=Nc*1.0/Nt*100;
		printf("%.1f%c\n",ans,'%');
	}
	return 0;
}
