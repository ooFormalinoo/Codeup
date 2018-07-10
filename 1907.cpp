#include<iostream>
using namespace std;
int cnt(int x){
	if(x==1) return 1;
	else if(x==2) return 2;
	else return cnt(x-1)+cnt(x-2);
}
int main(){
	int N;
	while(scanf("%d",&N)!=EOF){
		printf("%d\n",cnt(N));
	} 
	return 0;
} 
