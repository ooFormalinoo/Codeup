#include<iostream>
using namespace std;
int main(){	
	int a;
	while(scanf("%d",&a)){
		if(a==0) break;
		int prime[33000],prinum=0;
		int flag[33000]={0};
		for(int i=2;i<a;i++){
			if(flag[i]==0){
				prime[prinum++]=i;
				for(int j=i;j<a;j+=i){
					flag[j]=1;
				}
			}
		}
		int ans=0;
		for(int i=0;prime[i]<=a/2;i++){
			int temp=a-prime[i];
			for(int j=0;j<prinum;j++){
				if(prime[j]==temp){
					ans++;
					break;
				}
				if(prime[j]>temp){
					break;
				}
			}
		}
		printf("%d\n",ans); 
	}
	return 0;
}
