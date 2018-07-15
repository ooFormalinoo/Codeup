#include<iostream>
#include<algorithm>
using namespace std;
bool cmp(long long a,long long b){
	return a>b;
}
int main(){
	long long L,N;
	long long len[610];
	while(scanf("%lld%lld",&L,&N)!=EOF){
		for(int i=0;i<N;i++){
			scanf("%lld",&len[i]);
		}
		sort(len,len+N,cmp);
		long long x=0;
		for(int i=0;i<N;i++){
			x+=len[i];
			if(x>=L){
				printf("%d\n",i+1);
				break;
			}
		}
		if(x<L) printf("impossible\n");
	}
	return 0;
} 
