#include<bits/stdc++.h>
using namespace std;
long k1=1e9+7;
long a[1000][1000];
long c(long k,long n)
{
	if(k==0||k==n) return 1;
	else{
		for(long i=0;i<=k;i++)
			for(long j=i;j<=n;j++)
			if(i==0||i==j) a[i][j]=1;
			else{
				a[i][j]=((a[i][j-1]%k1)+(a[i-1][j-1]%k1))%k1;
			}
		
		return a[k][n]%k1;	
	}
}
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long n,r;
		cin>>r>>n;
		cout<<c(n,r);
		cout<<endl;
	}
}
