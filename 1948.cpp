#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		if(n==0) break;
		for(int i=0;i<n;i++){
			int x,ans=0;
			scanf("%d",&x);
			for(int i=1;i<sqrt(1.0*x);i++){
				if(x%i==0) ans+=2;
			}
			if(sqrt(1.0*x)==(int)sqrt(1.0*x)) ans++;
			printf("%d\n",ans);
		}
	} 
	return 0;
} 
