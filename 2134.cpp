#include<iostream>
#include<algorithm>
using namespace std;
struct item{
	double f;
	double j;
	double r;
};
bool cmp(item a,item b){
	if(a.r!=b.r) return a.r>b.r;
	else return a.j>b.j;
}
int main(){
	int M,N;
	while(scanf("%d%d",&M,&N)){
		if(N==-1) break;
		item a[1010];
		for(int i=0;i<N;i++){
			scanf("%lf%lf",&a[i].j,&a[i].f);
			a[i].r=a[i].j/a[i].f;
		}
		sort(a,a+N,cmp);
		double ans=0;
		int i=0;
		int need=0;
		for(i;i<N;i++){
			if(need+a[i].f>M) break;
			ans+=a[i].j;
			need+=a[i].f;
		}
		if(i<N){
			ans=ans+(M-need)*a[i].r;
		}
		printf("%.3f\n",ans);
		
		
	}
	return 0;
}
