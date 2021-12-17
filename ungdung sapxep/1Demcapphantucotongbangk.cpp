#include<bits/stdc++.h>
using namespace std;
main()
{
	short t;
	cin>>t;
	int a[101],n,k;
	while(t--)
	{
		int dem=0;
		cin>>n>>k;
		for(int i=0;i<n;i++)
		cin>>a[i];
		sort(a,a+n);
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(a[i]+a[j]==k)	dem++;
				if(a[i]+a[j]>k)		break;
			}
		}
		cout<<dem<<endl;
	}
}

