#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		int prime[40000],prinum=0;
		int flag[40000]={0};
	//	int factor[10];
		for(int i=2;i<=sqrt(n);i++){
			if(flag[i]==0){
				prime[prinum++]=i;
				for(int j=i+i;j<=sqrt(n);j+=i){
					flag[j]=1;
				}
			}
		}
		int ans=0;
		for(int i=0;i<prinum;i++){
			while(n%prime[i]==0){
				n=n/prime[i];
				ans++;
			}
		}
		if(n>1) ans++;
		printf("%d\n",ans);
	}
	return 0;
}
