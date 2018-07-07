#include<iostream>
#include<algorithm>
using namespace std;
bool cmp(int a,int b){
	return a>b;
}
int main(){
	int a[10]={0};
	while(scanf("%d",&a[0])!=EOF){
		for(int i=1;i<10;i++){
			scanf("%d",&a[i]);
		}
		sort(a,a+10,cmp);
		for(int i=0;i<10;i++){
			if(a[i]%2)
				printf("%d ",a[i]);
		}
		sort(a,a+10);
		for(int j=0;j<10;j++){
			if(a[j]%2==0)
				printf("%d ",a[j]);
		}
		cout<<endl;	
	}	
	return 0;
}
