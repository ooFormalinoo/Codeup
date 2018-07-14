#include<iostream>
using namespace std;
int main(){
	int N;
	while(scanf("%d",&N)){
		if(N==0) break;
		double price=0;
		while(N>13){
			price=price+18;
			N=N-8;
		}
		if(0<N&&N<=4) price+=10;
		if(4<N&&N<=8) price+=10+2*(N-4);
		if(8<N&&N<=13) price+=18+2.4*(N-8);
		int price2=(int)price;
		if(price2==price){
			printf("%d\n",price2);	
		}
		else
			printf("%.1lf\n",price);
		
	}
	return 0;
}
