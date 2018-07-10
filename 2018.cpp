#include<iostream>
using namespace std;
int fib(int n){
	if(n==0) return 0;
	else if(n==1) return 1;
	else return fib(n-1)+fib(n-2); 
}
int main(){
	int m;
	scanf("%d",&m);
	while(m--){
		int n;
		scanf("%d",&n);
		for(int i=0;i<n;++i)
		{
			for(int j=0;j<(2*n-1)-(2*i+1);++j)
				cout<<" ";
			for(int k=0;k<2*i+1;++k)
				cout<<fib(k)<<" ";
			cout<<endl;
		}
	}
	return 0;
}
