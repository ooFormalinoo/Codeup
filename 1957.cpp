#include<iostream>
using namespace std;
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		for(int i=0;i<=100;i++){
			for(int j=0;j<=100-i;j++){
				for(int k=100;k>=0;k--){
					if((i+j+k==100)&&(5*i+3*j+1.0*k/3<=n)){
						printf("x=%d,y=%d,z=%d\n",i,j,k);
					}
				}
			}
		}
	}
	return 0;
}
