#include<iostream>
#include<map>
#include<set>
#include<string>
using namespace std;
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	map<int,set<string> > mp;
	while(n--){
		string name;
		cin>>name;
		int num;
		scanf("%d",&num);
		for(int i=0;i<num;i++){
			int temp;
			scanf("%d",&temp);
			mp[temp].insert(name);
		}
	}
	for(int i=1;i<=k;i++){
		set<string> st=mp[i];
		printf("%d %d",i,st.size());
		for(auto it=st.begin();it!=st.end();it++){
			cout<<endl<<*it;
		}
		cout<<endl;
	}
	return 0;
} 
