#include<cstdio>
#include<cstring>
void change(char a[],char b[])
{
	int j=0;
	for(int i=0;i<strlen(a);i++)
	{
		if(a[i]!=',')
		  b[j++]=a[i];
	}
}
int main()
{
	char a[20],b[20];
	while(scanf("%s%s",a,b)!=EOF)
	{
		char c[20]={},d[20]={};
		change(a,c);
		change(b,d);
		long int num1,num2;
		sscanf(c,"%ld",&num1);
		sscanf(d,"%ld",&num2);
		printf("%ld\n",num1+num2);
   }
	return 0;
}
