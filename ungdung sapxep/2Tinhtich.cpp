#include<bits/stdc++.h>
using namespace std;
main()
{
	short t;
	long n,m;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		long long min=LONG_MIN,max=LONG_MAX;
		long a[n],b[m];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]>min) min=a[i];
		}
		for(int i=0;i<m;i++)
		{
			cin>>b[i];
			if(b[i]<max) max=b[i];
		}
		cout<<min*max<<endl;
	}
}

