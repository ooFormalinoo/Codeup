#include<iostream>
using namespace std;
int main(){
	int N;
	while(scanf("%d",&N)!=EOF){
		int a[210]={0};
		for(int i=0;i<N;i++){
			scanf("%d",&a[i]);
		}
		int x,j=0;
		scanf("%d",&x);
		for(j=0;j<N;j++){
			if(a[j]==x){
				printf("%d\n",j);
				break;
			}
		}
		if(j==N) printf("%d\n",-1);
	}
	return 0;
}
