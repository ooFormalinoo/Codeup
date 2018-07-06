#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int N;
	while(scanf("%d",&N)!=EOF){
		int a[110];
		for(int i=0;i<N;i++){
			scanf("%d",&a[i]);
		}
		sort(a,a+N);
		for(int i=0;i<N;i++){
			printf("%d ",a[i]);
		}
		cout<<endl;
	}
	return 0;
} 
