#include<bits/stdc++.h>
using namespace std;
main()
{
	int k,t;
	long n,i,j;
	cin>>t;
	while(t--)
	{
		cin>>k;
		cin>>n;
		long a[1000],h=0;
		long art[10000];
		for(i=0;i<k;i++)
		for(j=0;j<n;j++)
		{
			cin>>a[j];
			art[h++]=a[j];
		}
		sort(art,art+h);
		for(i=0;i<h;i++)
		cout<<art[i]<<" ";
	cout<<endl;
	}
}

