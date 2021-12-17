#include<bits/stdc++.h>
using namespace std;
main()
{
	long t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		long long a[n],b[n];
		for(long i=0;i<n;i++)
		{
			cin>>a[i];
			b[i]=-1;
		}
		for(long i=0;i<n;i++)
		for(long j=0;j<n;j++)
		{
			if(a[j]==i) {
			b[i]=i;break;}
		}
		for(int i=0;i<n;i++) cout<<b[i]<<" ";
		cout<<endl;
	}
}
