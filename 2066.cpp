#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main() {
    int m;
    scanf("%d", &m);
    while(m--) {
    	int a[101] = {0};//输入的数据 
		int statistic[101][1000] = {0};//第i组值为j的数据出现的次数 
		int showG[101] = {0};//每个数据对应组数
        int n;
        scanf("%d", &n);
        for (int j=1;j<=n;j++) {
            int num;
            scanf("%d", &num);
            a[j] = num;
        }
        for (int j=1; j<=n;j++) {
            int temp;
            scanf("%d",&temp);
            statistic[temp][a[j]]++;
            showG[j]=temp;
        }
        sort(a+1, a+n+1);
        sort(showG+1, showG+n+1);
        for (int j=1;j<=n;j++) {
            if (j==1) {
                printf("%d={", showG[j]);
                for (int k= 1;k<=n;k++) {
                    if (k==1) {
                        printf("%d=%d",a[k],statistic[showG[j]][a[k]]);
                    }
					else {
                        if(a[k]!=a[k-1]){
                            printf(",%d=%d",a[k],statistic[showG[j]][a[k]]);
                        }
                    }
                }
                printf("}\n");
            } 
			else {
                if (showG[j] != showG[j - 1]) {
                    printf("%d={", showG[j]);
                    for (int k = 1; k <= n; ++k) {
                        if (k == 1) {
                            printf("%d=%d", a[k], statistic[showG[j]][a[k]]);
                        } else {
                            if (a[k] != a[k - 1]) {
                                printf(",%d=%d", a[k], statistic[showG[j]][a[k]]);
                            }
                        }
                    }
                    printf("}\n");
                }
            }
        }
    }
    return 0;
}
