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
		long max1,maxs=-99999;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++)
		{
			max1=1;
			for(int j=i;j<n;j++)
			{
				max1*=a[j];
				maxs=max(max1,maxs);
			}
		}
		cout<<maxs<<endl;
	}
}
