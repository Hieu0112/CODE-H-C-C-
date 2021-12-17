#include<bits/stdc++.h>
using namespace std;
main()
{
	int n,k,b,x;
	cin>>n>>k>>b;
	int a[n+1]={0};
	for(int i=1;i<=b;i++)
	{
		cin>>x;
		a[x]=1;
	}
	int den=0;
	for(int i=1;i<=k;i++)
	den+=a[i];
	int sum=den;
	for(int i=k+1;i<=n;i++)
	{
		sum+=a[i];
		sum-=a[i-k];
		den=min(den,sum);
	}
	cout<<den;
}
