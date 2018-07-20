#include<iostream>
using namespace std;
int main(){
    int n;
    int a,b,c,d; 
    for (n=1000;n<1112;n++){
		a=n/1000;
		b=n/100%10;
		c=n/10%10;
		d=n%10;
		if (n*9==d*1000+c*100+b*10+a){
			printf("%d\n",n);
		} 
		
	}
	return 0;

}
