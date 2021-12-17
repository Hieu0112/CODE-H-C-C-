#include<bits/stdc++.h>
using namespace std;
main()
{
	long n,t,k;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cin>>k;
		long a[n];
		for(long i=0;i<n;i++)
		cin>>a[i];
		sort(a,a+n);
		cout<<a[k-1]<<endl;
	}
}

