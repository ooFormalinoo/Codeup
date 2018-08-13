#include<iostream>
using namespace std;
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		if(n==0) break; 
		int temp[1010];
		for(int i=0;i<n;i++){
			scanf("%d",&temp[i]);
		}
		int k;
		scanf("%d",&k);
		int ans[1010]={-1};
		int num=1;
		int layer=1;
		int index=1;
		while(index<=n){
			for(int i=0;i<num&&index<=n;i++){
				ans[index++]=layer;
			}
			layer++;
			num*=2;
		}
		bool b=false;
		for(int i=1;i<=n;i++){
			if(ans[i]==k){
				b=true;
				printf("%d ",i);
			}
		}
		if(b) cout<<endl;
		if(!b) printf("EMPTY\n");
		
	}
	return 0;
}
