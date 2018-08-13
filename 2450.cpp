#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
using namespace std;
struct TNode
{
	int level;
    vector<int>child;
    
};

TNode Tree[1000010];

int Deepth(int root)
{
    int dp = 0;
    queue <int> que;
    que.push(root);

    while(que.size())
    {
        int node = que.front();
        que.pop();

        for(int i=0;i<Tree[node].child.size();i++)
        {
            int childid = Tree[node].child[i];
            Tree[childid].level = Tree[node].level + 1;
            que.push(childid);

            if(Tree[childid].level > dp)
                dp = Tree[childid].level;
        }
    }

    return dp;
}

int main()
{
    int n,root,child;
    while(cin >> n)
    {
        for(int i=0;i<n-1;++i)
        {
            cin >> root >> child;
            Tree[root].child.push_back(child);
        }
        Tree[1].level = 1;
        cout << Deepth(1)<<endl;
    }

    return 0;
}
