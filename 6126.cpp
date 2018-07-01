#include<iostream>
using namespace std;
int main(){
	long int a,b,c;
	int N,i=1;
	scanf("%d",&N);
	while(N--){
		scanf("%ld%ld%ld",&a,&b,&c);
		if(a+b>c) printf("Case #%d: true\n",i);
		else printf("Case #%d: false\n",i);
		i++;
	}
	return 0;
} 
