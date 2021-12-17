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
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		sort(a,a+n);
		int maxs=1000;
		for(int i=0;i<n-1;i++)
		maxs=min(a[i+1]-a[i],maxs);
		cout<<maxs<<endl;
	}
}
