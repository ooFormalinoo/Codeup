#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int N;
	while(scanf("%d",&N)!=EOF){
		if(N==0) break;
		int a[10010];
		for(int i=0;i<N;i++){
			scanf("%d",&a[i]);
		}
		sort(a,a+N);
		if(N%2==0){
			printf("%d\n",(a[N/2-1]+a[N/2])/2);
		}
		else{
			printf("%d\n",a[N/2]);
		}
	}
	return 0;
}
