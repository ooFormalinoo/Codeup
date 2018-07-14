#include<iostream>
#include<algorithm>
using namespace std;
struct prg{
	int s;
	int e;
};
bool cmp(prg p1,prg p2){
	if(p1.s!=p2.s) return p1.s>p2.s;
	else return p1.e<p2.e;
}
int main(){
	int N;
	while(scanf("%d",&N)){
		if(N==0) break;
		prg p[110];
		for(int i=0;i<N;i++){
			scanf("%d%d",&p[i].s,&p[i].e);
		}
		sort(p,p+N,cmp);
		int ans=1,last=p[0].s;
		for(int j=0;j<N;j++){
			if(p[j].e<=last){
				last=p[j].s;
				ans++;
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}
