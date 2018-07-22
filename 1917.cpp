#include<iostream>
#include<cstring>
using namespace std;
struct bign{
	int d[100000];
	int length;
	bign(){
		memset(d,0,sizeof(d));
		length=0;
	}
};
bign change(char a[]){
	bign c;
	c.length=strlen(a);
	for(int i=0;i<c.length;i++){
		c.d[i]=a[c.length-1-i]-'0';
	}
	return c;
}
bign multi(bign a, int b){
	bign c;
	int carry=0;
	for(int i=0;i<a.length;i++){
		int temp=a.d[i]*b+carry;
		c.d[c.length++]=temp%10;
		carry=temp/10;
	}
	
	while(carry){
		c.d[c.length++]=carry%10;
		carry/=10;
	}
	return c;
}
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		if(n==0){
			printf("1\n");
			continue;
		}
		bign ans;
		ans.d[0]=1;ans.length=1;
		for(int i=n;i>0;i--){
			ans=multi(ans,i);
		}
		for(int i=ans.length-1;i>=0;i--){
			printf("%d",ans.d[i]);
		}
		cout<<endl;
	}
	return 0;
}
