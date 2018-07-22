#include<iostream>
#include<cstring>
using namespace std;
struct bign{
	int d[1010];
	int length;
	bign(){
		memset(d,0,sizeof(d));
		length=0;
	}
};
bign change(char a[]){
	bign c;
	int len=strlen(a);
	c.length=len;
	for(int i=0;i<len;i++){
		c.d[i]=a[len-1-i]-'0';
	}
	return c;
}
bign add(bign b1,bign b2){
	bign c;
	int carry=0;
	for(int i=0;i<b1.length||i<b2.length;i++){
		int temp=b1.d[i]+b2.d[i]+carry;
		c.d[c.length++]=temp%10;
		carry=temp/10;
	}
	if(carry!=0) c.d[c.length++]=carry;
	return c;
}
int main(){
	char a[1010],b[1010];
	while(scanf("%s%s",a,b)!=EOF){
		bign a1=change(a);
		bign a2=change(b);
		bign ans=add(a1,a2);
		for(int i=ans.length-1;i>=0;i--){
			printf("%d",ans.d[i]);
		}
		cout<<endl;
	}
	return 0;
} 
