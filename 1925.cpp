#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int N;
	while(scanf("%d",&N)!=EOF){
		if(N==1){
			int x;
			scanf("%d",&x);
			printf("%d\n%d\n",x,-1);
			continue;
		}
		int a[1010];
		for(int i=0;i<N;i++){
			scanf("%d",&a[i]);
		}
		sort(a,a+N);
		printf("%d\n",a[N-1]);
		for(int i=0;i<N-1;i++){
			printf("%d ",a[i]);				
		}
		cout<<endl;
	}
	return 0;
}
