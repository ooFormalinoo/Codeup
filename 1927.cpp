#include<iostream>
using namespace std;
int main(){
	int N;
	while(scanf("%d",&N)!=EOF){
		int a[150]={0};
		int b[150]={0};
		int M=0;
		for(int i=0;i<N;i++){
			scanf("%d",&a[i]);
		}
		scanf("%d",&M);
		int x=0;
		for(int i=0;i<M;i++){
			scanf("%d",&x);
			for(int j=0;j<N;j++){
				if(a[j]==x){
					b[i]=1;break;
				}
			}
		}
		for(int k=0;k<M;k++){
			if(b[k]==1) printf("YES\n");
			else printf("NO\n");
		}
		
	}
	return 0;
}
