#include<iostream>
using namespace std;
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		int prime[10010],prinum=0;
		int flag[10010]={0};
		for(int i=2;i<n;i++){
			if(flag[i]==0){
				if(i%10==1){
					prime[prinum++]=i;
				}
				for(int j=i+i;j<n;j+=i){
					flag[j]=1;
				}
			}
		}
		if(prinum==0){
			printf("-1\n");
		}
		else{
			for(int i=0;i<prinum-1;i++){
				printf("%d ",prime[i]);
			}
			printf("%d\n",prime[prinum-1]);
		}
		
	}
	return 0;
} 
