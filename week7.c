#include <stdio.h>
#include <memory.h>
#define max(x,y)({(x)>(y)?(x):(y);})
int main()
{
	int need[505];
	int value[505];
	int dp[100005];
	int n,m;
	int i,j;
	scanf("%d%d",&n,&m);
	for (i=0;i<n;i++)
	{
		scanf("%d%d",&need[i],&value[i]);
	}
	memset(dp,0,sizeof(dp));
	for (i=0;i<n;i++)
	{
		for (j=0;j<=m;j++){
			if (j>=need[i])
				dp[j]=max(dp[j],dp[j-need[i]]+value[i]);
		}
	}
	printf("%d\n",dp[m]);
	return 0;
}