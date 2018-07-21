#include<iostream>
#include<cmath>
using namespace std;
int prime(int a){
	for(int i=2;i<=sqrt(1.0*a);i++){
		if(a%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		int cnt=0,a=2,ans;
		while(cnt<n){
			if(prime(a)){
				cnt++;
				ans=a;
			}
			a++;
		}
		printf("%d\n",ans);
	}
	return 0;
}
