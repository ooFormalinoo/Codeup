#include<iostream>
using namespace std;
int gcd(int a,int b){
	if(b==0) return a;
	else return gcd(b,a%b);
}
int lcm(int a,int b){
	int temp=gcd(a,b);
	return a/temp*b;
}
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		int m;
		scanf("%d",&m);
		int *a=new int[m];
		for(int i=0;i<m;i++){
			scanf("%d",&a[i]);
		}
		int r=a[0];
		for(int i=1;i<m;i++){
			r=lcm(r,a[i]);
		}
		printf("%d\n",r);
		delete[] a;
	}
	return 0;
}
