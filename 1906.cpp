#include <cstdio>
#include <cstring>
int main()
{
	long int a,b;
	while(scanf("%ld%ld",&a,&b)!=EOF)
	{
		char s1[20], s2[20];
		sprintf(s1,"%ld",a);
		sprintf(s2,"%ld",b);
		long int sum=0; 
		for(int i=0;i<strlen(s1);i++)
	        for(int j=0;j<strlen(s2);j++)
	        {
	        	sum+=(s1[i]-'0')*(s2[j]-'0');
	        }
	    printf("%ld\n",sum);
	}
	return 0;
}
