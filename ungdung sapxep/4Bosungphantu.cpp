#include<bits/stdc++.h>
using namespace std;
main()
{
	long t,n,i,dem;
	cin>>t;
	while(t--)
	{
		dem=0;cin>>n;
		long a[n];
		for(i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		for(i=0;i<n-1;i++)
		if(a[i]<a[i+1]-1) dem+=a[i+1]-a[i]-1;
		cout<<dem<<endl;
	}
}

