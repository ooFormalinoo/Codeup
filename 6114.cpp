#include <iostream>
#include <cstdio>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
map<int,vector<int> > mp;
int w[] = {1,26,26 * 26,26 * 26 * 26};
int make(char *p)
{
    return (p[3] - '0') * w[0] + (p[2] - 'A') * w[1] + (p[1] - 'A') * w[2] + (p[0] - 'A') * w[3];
}
int main()
{
    int n,k,i,j;
    scanf("%d%d",&n,&k);
    char name[6];
    for(i = 0; i < k; i++)
    {
        int c_num,s_num;
        scanf("%d%d",&c_num,&s_num);
        for(j = 0; j < s_num; j++)
        {
            scanf("%s",name);
            mp[make(name)].push_back(c_num);
        }
    }
    for(i = 0; i < n; i++)
    {
        scanf("%s",name);
        int ss = make(name);
        if(mp.find(ss) != mp.end())
        {
            sort(mp[ss].begin(),mp[ss].end());
            printf("%s %d",name,mp[ss].size());
            for(j = 0; j < mp[ss].size(); j++)
                printf(" %d",mp[ss][j]);
            puts("");
        }
        else
        {
            printf("%s 0\n",name);
        }
    }
    return 0;
}
