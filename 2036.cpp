#include <cstdio>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int o=0,e=0,a;
		while(n--)
		{
			scanf("%d",&a);
			if(a%2==0)
			{
				e++;
			}
			else
			o++;
		}
		if(o<e)
		printf("NO\n");
		if(o>e)
		printf("YES\n");
	}
	
	
	
	return 0;
}
