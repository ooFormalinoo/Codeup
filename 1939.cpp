#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a;
	while(scanf("%d",&a)!=EOF){
		int a2=a*a;
		int temp=a;
		int r=1;
		while(temp){
			r*=10;
			temp/=10;
		}
		if((a2-a)%r==0) printf("Yes!\n");
		else printf("No!\n");
	}
	return 0;
}
