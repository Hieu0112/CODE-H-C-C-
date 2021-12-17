#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		sort(a,a+n);
		long maxs=1E9;
		for(int i=0;i<n-1;i++)
		maxs=min(a[i+1]-a[i],maxs);
		cout<<maxs<<endl;
	}
}
